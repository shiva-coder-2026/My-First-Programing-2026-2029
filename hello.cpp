#include <iostream>
using namespace std;

int main() {
    double a[2];
    char op;

    cout << "Enter first number: ";
    cin >> a[0];

    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> a[1];

    switch (op) {
        case '+':
            cout << "Result = " << a[0] + a[1];
            break;

        case '-':
            cout << "Result = " << a[0] - a[1];
            break;

        case '*':
            cout << "Result = " << a[0] * a[1];
            break;

        case '/':
            if (a[1] != 0)
                cout << "Result = " << a[0] / a[1];
            else
                cout << "Cannot divide by zero!";
            break;

        case '%':
            cout << "Modulo is available only for integers.";
            break;

        default:
            cout << "Invalid operator!";
    }

    return 0;
}
