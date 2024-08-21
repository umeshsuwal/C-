/* 6.Write a C++program to read any two numbers and performs simple arithmetic operations
 (Addition, subtraction, division, multiplication).*/
 
#include <iostream>
using namespace std;

class ArithmeticOperations {
    int num1, num2;
public:
    ArithmeticOperations(int x, int y) {
        num1 = x;
        num2 = y;
    }

    int add() {
        return num1 + num2;
    }

    int subtract() {
        return num1 - num2;
    }

    int multiply() {
        return num1 * num2;
    }

    int divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Division by zero is undefined!" << endl;
            return 0;
        }
    }
};

int main() {
    int a, b;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    ArithmeticOperations operations(a, b);

    cout << "Addition: " << operations.add() << endl;
    cout << "Subtraction: " << operations.subtract() << endl;
    cout << "Multiplication: " << operations.multiply() << endl;
    cout << "Division: " << operations.divide() << endl;

    return 0;
}

