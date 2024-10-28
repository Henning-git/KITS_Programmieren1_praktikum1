#include <iostream>
#include <limits> // Für std::numeric_limits

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

// 3x double input
// calculate sum, product, average
void exercise_4() {
    // -------- read numbers --------
    double a, b, c;
    while(true) {
        // instruct user
        cout << "input 3 floating point numbers: ";

        // read 3 doubles
        cin >> a >> b >> c;

        // check for errors (e.g. wront type)
        if(cin.fail()) {
            // reset cin error
            cin.clear();

            // ignore all characters until line break
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            // instruct user
            cout << "invalid input" << endl;
        }
        else
            break;
    }

    // -------- calculate sum --------
    double sum = a + b + c;
    cout << "sum: " << sum << endl;

    // -------- calculate product --------
    double product = a * b * c;
    cout << "product: " << product << endl;

    // -------- calculate average --------
    double average = (a + b + c) / 3.0;
    cout << "average: " << average << endl;
}

// split number
void exercise_5() {
    // -------- input --------
    int input;

    // validate input
    while(true) {
        cout << "enter a three digit integer: ";
        cin >> input;

        // check for invalid input
        if(cin.fail() || input < 0 || input > 999) {
            // reset cin error
            cin.clear();

            // ignore all characters until line break
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            // instruct user
            cout << "invalid input" << endl;
        }
        else
            break;
    }

    // split input
    // example input = 789
    int digit_1 = input % 10; // 789 % 10 = 9
    int digit_10 = input / 10 % 10; // 789 / 10 = 78, 78 % 10 = 8
    int digit_100 = input / 100; // 789 / 100 = 7

    // output
    cout << digit_100 << "\n" << digit_10 << "\n" << digit_1 << endl;
}

int main() {
    // call exercise
    //exercise_1();
    //exercise_2();
    //exercise_3();
    //exercise_4();
    exercise_5();

    // return 0 to system
    return 0;
}
