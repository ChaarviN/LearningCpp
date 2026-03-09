#include<iostream>

int main() {
    double temp;
    char unit;

    std::cout << "What unit would you like to convert to? (C for Celsius, F for Fahrenheit): ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f') {
        std::cout << "Enter temperature in Celsiuis: ";
        std::cin >> temp;
        temp = (temp * 1.8) + 32.0;
        std::cout << "Temperature in Fahrenheit: " << temp << "F" << std::endl;
    }
    else if (unit == 'C' || unit == 'c') {
        std::cout << "Enter temperature in Fahrenheit: ";
        std::cin >> temp;
        temp = (temp - 32) / 1.8
        
        ;
        std::cout << "Temperature in Celsius: " << temp << "C" << std::endl;
    }
    else {
        std::cout << "Invalid unit entered. Please enter 'C' for Celsius or 'F' for Fahrenheit." << std::endl;
    }
}