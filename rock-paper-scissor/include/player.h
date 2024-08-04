#ifndef PLAYER_H
#define PLAYER_H
#include "sign.h"

class IPlayer {
    virtual SingValue input_sing() = 0;
};

class Player : public IPlayer {
public:
    SingValue input_sing() override;
};

#endif //PLAYER_H
