#include "../include/player.h"

#include <iostream>
using namespace std;

SingValue Player::input_sing() {
    string input;
    cout << "Input your sign: ";
    cin >> input;
    SingValue signValue = Sign().parse(input);
    return signValue;
}
