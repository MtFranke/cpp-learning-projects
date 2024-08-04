#include "../include/game.h"

#include <iostream>
using namespace std;

int Game::get_player_score() const {
    return playerScore;
}

int Game::get_computer_score() const {
    return computerScore;
}


SingValue Game::generate_computer_sign() {
    int randomNumber = rand() % 3 + 1;

    SingValue signValue = Sign().parse(randomNumber);
    std::cout << "Computer generated sign: " << Sign().sign_to_string(signValue) << std::endl;
    return signValue;
}

void Game::duel(SingValue playerSign, SingValue computerSign) {
    if (playerSign == computerSign) {
        // Draw, no score update
    } else if (
        (playerSign == SingValue::Rock && computerSign == SingValue::Scissors) ||
        (playerSign == SingValue::Paper && computerSign == SingValue::Rock) ||
        (playerSign == SingValue::Scissors && computerSign == SingValue::Paper)
    ) {
        playerScore++;
    } else {
        computerScore++;
    }
}
