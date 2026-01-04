#include "Cars.hpp"

void Cars::turnLeft() { std::cout << __FUNCTION__ << std::endl; }
void Cars::turnRight() { std::cout << __FUNCTION__ << std::endl; }
void Cars::brake() { std::cout << __FUNCTION__ << std::endl; }
void Cars::accelerate(int speed)
{

    if (speed >=0 && speed < 301)
    {

        std::cout << __FUNCTION__ << std::endl;
    }
    else{
        throw  InvalidAccelerate("Acc out of allowed range 0-300 "+std::to_string(speed));
    }
}