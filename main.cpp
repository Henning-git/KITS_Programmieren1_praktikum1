#include <iostream>

// imported from iostream
using namespace std;

// install qt
void exercise_1() {
    cout << "Hello World!" << endl;
}

// debugging
void exercise_2() {
    float result;
    int number1 = 7;
    int number2 = 8;
    result = number1 / number2; // 0,875 -> 0
    cout << result;
}

// finding errors
// documenting functionality
void exercise_3() {
    // just print to console
    cout << "los" << " geht's!" << endl;

    int ii = 0;
    int sum = 0;

    // loop from 0 to 9
    while (ii <= 9) {
        sum = sum + ii;
        ii = ii + 1;
    }

    // print sum of numbers 0-9
    cout << "Ergebnis: " << sum << endl;
}

void exercise_4() {

}

int main() {
    // call exercise
    //exercise_1();
    //exercise_2();
    //exercise_3();
    exercise_4();

    // return 0 to system
    return 0;
}
