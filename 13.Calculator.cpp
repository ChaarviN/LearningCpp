#include<iostream>

int main() {
    char op;
    double num1, num2;
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;
    std::cout << "Enter number 1: ";
    std::cin >> num1;
    std::cout << "Enter number 2: ";
    std::cin >> num2;

    switch(op) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                std::cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                std::cout << "Error: Division by zero!";
            break;
        default:
            std::cout << "Error: Invalid operator!";
    }
}