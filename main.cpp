#include <iostream>
#include <time.h>
#include <iomanip>

/**
 * main.cpp
 *  Author: Carter Doncouse
 *   Brief : Play high or Low Card game
 *   date: 05/20/2023
 **/


int playGame() {
    int wins = 0;
    int losses = 0;
    bool quitGame = false;

    while (!quitGame) {
        int cardOnTable = rand() % 15 + 1;
        std::cout << "Card Drawn: " << cardOnTable << std::endl;

        std::cout << "1. The next card will be higher" << std::endl;
        std::cout << "2. The next card will be lower" << std::endl;
        std::cout << "3. Quit" << std::endl;

        int choice;
        std::cout << "Choose a number: ";
        std::cin >> choice;

        if (choice == 3) {
            quitGame = true;
        } else {
            int nextCard = rand() % 15 + 1;
            std::cout << "Card Drawn: " << nextCard << std::endl;

            if ((nextCard > cardOnTable && choice == 1) || (nextCard < cardOnTable && choice == 2)) {
                std::cout << "You win!" << std::endl;
                wins++;
            } else {
                std::cout << "You lose!!" << std::endl;
                losses++;
            }
        }

        std::cout << "Wins: " << wins << std::endl;
        std::cout << "Losses: " << losses << std::endl;
        std::cout << std::endl;
    }

    std::cout << "Thanks for playing" << std::endl;

    return 0;
}

int main() {
    playGame();
    return 0;
}
