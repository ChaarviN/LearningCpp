#include <iostream>
#include <ctime>

int main() {

    int randNum;
    int guess;
    int attempts = 0;


    srand(time(0));
    randNum = rand() % 100 + 1;

    do{
        std::cout << "Guess a number between 1 and 100: ";
        std::cin >> guess;
        attempts++;

        if(guess > randNum) {
            std::cout << "Too high! Try again." << std::endl;
        } else if(guess < randNum) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts!" << std::endl;
        }
    } while(guess != randNum);

    std::cout << "The random number was: " << randNum << std::endl;
    std::cout << "It took you " << attempts << " attempts!" << std::endl;

}