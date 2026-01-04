#pragma once
#include "PetrolEngine.hpp"
#include "Car.hpp"

class PetrolCar: virtual public Car
{
public:
    PetrolCar(PetrolEngine* engine);
    ~PetrolCar();
    void ChangeGear(int gear);
    void changeEngine(PetrolEngine* pe); 

    //void turnLeft();
    //void turnRight();
   // void brake();
    //void accelerate(int speed);
    void refuel();
    void refill() override;
private:
    PetrolEngine* engine_;
};

