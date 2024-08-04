#include "../include/sign.h"

SingValue Sign::parse(int val) const {
    return static_cast<SingValue>(val);
}

SingValue Sign::parse(const std::string &input) const {
    if (input == "rock") return Rock;
    if (input == "paper") return Paper;
    if (input == "scissors") return Scissors;
    return None;
}

std::string Sign::sign_to_string(SingValue value) const {
    switch (value) {
        case None: return "None";
        case Rock: return "Rock";
        case Paper: return "Paper";
        case Scissors: return "Scissors";
        default: return "Unknown";
    }
}
