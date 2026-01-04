#include "Car.hpp"

void Car::turnLeft() { std::cout << __FUNCTION__ << std::endl; }
void Car::turnRight() { std::cout << __FUNCTION__ << std::endl; }
void Car::brake() { std::cout << __FUNCTION__ << std::endl; }
void Car::accelerate(int speed)
{

    if (speed >=0 && speed < 301)
    {

        std::cout << __FUNCTION__ << std::endl;
    }
    else{
        throw  InvalidAccelerate("Acc out of allowed range 0-300 "+std::to_string(speed));
    }
}
