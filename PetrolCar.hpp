#pragma once
#include "PetrolEngine.hpp"
#include "Cars.hpp"

class PetrolCar: virtual public Cars
{
public:
    PetrolCar(PetrolEngine* engine);
    ~PetrolCar();
    void ChangeGear(int gear);

    //void turnLeft();
    //void turnRight();
   // void brake();
    //void accelerate(int speed);
    void refuel();
    void refill() override;
private:
    PetrolEngine* engine_;
};
