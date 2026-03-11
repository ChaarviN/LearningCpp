#include <iostream>
#include <ctime>

int main() {
    srand(time(0));
    int randNum = rand() % 10 + 1;

    switch(randNum) {
        case 1:
            std::cout << "You may rely on it" << std::endl;
            //Good
            break;
        case 2:
            std::cout << "Signs point to yes!" << std::endl;
            //Good
            break;
        case 3:
            std::cout << "Better Not Tell You Now" << std::endl;
            //Bad
            break;  
        case 4:
            std::cout << "Concentrate and Ask Again" << std::endl;
            //None
            break;
        case 5:
            std::cout << "Outlook Not So Good" << std::endl;
            //Bad
            break;
        case 6:
            std::cout << "Reply hazy, try again" << std::endl;
            //None
            break;
        case 7:
            std::cout << "My reply is no" << std::endl;
            //Bad
            break;
        case 8:
            std::cout << "It is decidedly so" << std::endl;
            //Good
            break;
        case 9:
            std::cout << "Without a doubt" << std::endl;
            //Good
            break;
        case 10:
            std::cout << "Yes, Definitely!" << std::endl;
            //Good
            break;
    }

    return 0;
}