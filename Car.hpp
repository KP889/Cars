#pragma once
#include <iostream>
#include <stdexcept>

class Car
{
private:
    /* data */
public:
    Car(/* args */){};
    virtual ~Car(){};
    void turnLeft();
    void turnRight();
    void brake();
    void accelerate(int speed);
    virtual void refill()=0;
};


class InvalidAccelerate: public std::logic_error
{
 public:
    InvalidAccelerate(const std::string& message):std::logic_error(message){};

      // Override what() function

};
