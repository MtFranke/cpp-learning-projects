#include <iostream>
#include "../include/sign.h"
#include "../include/player.h"
#include "../include/game.h"
using namespace std;


int main() {
    srand(static_cast<unsigned>(time(0)));

    cout << "Welcome to game of rock, paper, scissor against computer" << endl;
    Game game = Game();
    Player player = Player();
    while (game.get_player_score() < 3 && game.get_computer_score() < 3) {
        SingValue sign = player.input_sing();
        if (sign == None) {
            cout << "You entered an invalid input" << endl;
            continue;
        }


        SingValue computerSign = game.generate_computer_sign();
        game.duel(sign, computerSign);
        cout << "Current score, player: " << game.get_player_score() << " computer: " << game.get_computer_score() <<endl;
    }

    cout << "Game output, player: " << game.get_player_score() << " computer: " << game.get_computer_score() << endl;
    return 0;
}

