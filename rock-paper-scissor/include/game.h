#ifndef GAME_H
#define GAME_H

#include "sign.h"


class IGame {
public:
    virtual ~IGame() = default;

    virtual int get_player_score() const = 0;

    virtual int get_computer_score() const = 0;

    virtual void duel(SingValue playerSign, SingValue computerSign) = 0;

    virtual SingValue generate_computer_sign() = 0;

};


class Game : public IGame {
private:
    int playerScore;
    int computerScore;

public:
    int get_player_score() const override;

    int get_computer_score() const override;

    void duel(SingValue playerSign, SingValue computerSign) override;

    SingValue generate_computer_sign() override;

};

#endif //GAME_H
