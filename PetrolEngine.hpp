#pragma once
#include <stdexcept>
#include<string>

class InvalidGear: public std::logic_error
{
 public:
    InvalidGear(const std::string& message):std::logic_error(message){};

      // Override what() function

};


class PetrolEngine
{
public:
    PetrolEngine(int power=0, float capacity=0, int gears=0);
    void changeGear(int gear);

private:
    int power_;         // in HP
    float capacity_;    // in ccm
    int gears_;
    int currentGear_;
};
