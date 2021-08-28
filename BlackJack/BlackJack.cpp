#include <iostream>
#include "CardDeck.h"
#include "Player.h"

void printHandsInfo(Player* dealer, Player* player, bool endGame = false) {
    std::cout << "Hands" << std::endl
        << "    Dealer: " << dealer->getHandPresentation(endGame) << " " << (endGame ? std::to_string(dealer->getHandValue()) : "") << std::endl
        << "    Player: " << player->getHandPresentation(endGame) << " " << player->getHandValue() << std::endl;
    if (endGame) {
        if (player->getHandValue() > 21) {
            std::cout << "Casino wins." << std::endl;
        }
        else if (dealer->getHandValue() > 21) {
            std::cout << "Player wins." << std::endl;
        }
        else if (dealer->getHandValue() == player->getHandValue()) {
            std::cout << "Draw." << std::endl;
        }
        else {
            std::cout << ((player->getHandValue() > dealer->getHandValue()) ? "Player wins." : "Casino wins.");
        }
    }
}

int main() {
    bool endGame = false;
    CardDeck deck;
    Player player;
    Player dealer(true);

    std::cout << "Lets play the game!" << std::endl;

    dealer.getCard(&deck);
    dealer.getCard(&deck);
    player.getCard(&deck);
    player.getCard(&deck);

    if ((player.getHandValue() == 21) || (dealer.getHandValue() == 21)) {
        std::cout << "End game, somebody got BlackJack!" << std::endl;
        endGame = true;
    }
    else {
        printHandsInfo(&dealer, &player, endGame);
    }

    while (!endGame) {
        std::string answer;
        std::cout << "Take more card?(y/n):";
        std::cin >> answer;
        if (answer == "y") {
            player.getCard(&deck);
            if (player.getHandValue() > 21)
                endGame = true;
            else
                printHandsInfo(&dealer, &player);
        }
        else if (answer == "n") {
            endGame = true;
        }
        else {
            std::cout << "Unrecognized answer, try to do it right )" << std::endl;
        }
    }

    if (player.getHandValue() <= 21)
    {
        while (dealer.getHandValue() < 17) {
            dealer.getCard(&deck);
        }
    }

    printHandsInfo(&dealer, &player, endGame);
}
