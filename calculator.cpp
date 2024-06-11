#include <iostream>

using namespace std;

class Calculator {
private:
    double num1, num2;
public:
    Calculator(double a, double b) {
        num1 = a;
        num2 = b;
    }

    double add() {
        return num1 + num2;
    }

    double subtract() {
        return num1 - num2;
    }

    double multiply() {
        return num1 * num2;
    }

    double divide() {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Error! Division by zero!";
            return 0;
        }
    }
};

int main() {
    char op;
    double num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    Calculator calc(num1, num2);

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << calc.add();
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << calc.subtract();
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << calc.multiply();
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << calc.divide();
            break;
        default:
   
            cout << "Error! Invalid operator";
            break;
    }

    return 0;
}
