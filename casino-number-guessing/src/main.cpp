#include <iostream>
using namespace std;

int random_number() {

    srand(static_cast<unsigned>(time(0)));
    int randomNumber = rand() % 3 + 1;
    return randomNumber;

}

class Game {
private:
    int _guess;
public:
    Game(int guess) {
        _guess = guess;
    };
    bool Roll() {
        int randomNumber = random_number();
        if (_guess == randomNumber) {
            cout << "You won!" << endl;
            return true;
        }

        cout << "You lost! casino wanted a "<< randomNumber << endl;
        return false;

    }
};



int main() {

    string input;

    cout<<"Welcome in guess number game, it will be generated from 1 to 3 inclusive.\n";
    cout<<"Your pick: \n";
    cin >> input;
    int guess = stoi(input);
    auto game = Game(guess);
    game.Roll();

    return 0;
}

