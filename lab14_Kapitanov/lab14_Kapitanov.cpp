#include <iostream>
#include <cmath>
void fillArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] = pow(2, i);
    }
}
bool linearSearch(const int array[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
    setlocale(LC_ALL, "ukr");
    using namespace std;
    const int size = 25;
    int array[size];
    int number;

    fillArray(array, size);

 
    cout << "Введiть число для пошуку: ";
    cin >> number;

    if (linearSearch(array, size, number)) {
       cout << "Число " << number << " є у масивi." << endl;
    }
    else {
        cout << "Число " << number << " не знайдено у масивi." << endl;
    }
    return 0;
}
