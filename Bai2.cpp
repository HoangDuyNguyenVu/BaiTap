#include<iostream>
using namespace std;
int arithmetic(int num1, int num2, char op) {
    switch (op) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case 'x': return num1 * num2;
        case '/':
            if (num2 == 0) {
                cout << "Invalid divisor" << endl;
                exit(1);
            }
            return num1 / num2;
        case '%':
            if (num2 == 0) {
                cout << "Invalid divisor" << endl;
                exit(1);
            }
            return num1 % num2;
        default:
            cout << "Invalid operator" << endl;
            exit(1);
    }
}

