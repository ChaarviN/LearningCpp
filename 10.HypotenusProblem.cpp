#include<cmath>
#include <iostream>

int main()
{
    double a, b, c;
    std::cout << "Enter the length of side A: ";
    std::cin >> a;
    std::cout << "Enter the length of side B: ";
    std::cin >> b;

    //a = pow(a, 2);
    //b = pow(b, 2);
    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "The length of the hypotenuse is: " << c;

    return 0;
}