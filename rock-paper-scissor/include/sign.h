#ifndef SIGN_H
#define SIGN_H

#include <string>

enum SingValue {
    None = 0,
    Rock = 1,
    Paper = 2,
    Scissors = 3
};

class ISign {
public:
    virtual SingValue parse(int val) const = 0;
    virtual SingValue parse(const std::string& input) const = 0;
    virtual std::string sign_to_string(SingValue value) const = 0;
    virtual ~ISign() {}
};

class Sign : public ISign {
public:
    SingValue parse(int val) const override;
    SingValue parse(const std::string& input) const override;
    std::string sign_to_string(SingValue value) const override;
};


#endif //SIGN_H
