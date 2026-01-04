#pragma once
#include "ElectricEngine.hpp"
#include "PetrolCar.hpp"
#include "PetrolEngine.hpp"
#include "ElectricCar.hpp"
#include "PetrolCar.hpp"


class HybridCar : public ElectricCar, public PetrolCar
{
public:
    HybridCar(PetrolEngine* petrolEng, ElectricEngine* electricEng);
    ~HybridCar();
    void refill() override;
    // void turnLeft();
    // void turnRight();
    //void brake(){PetrolCar::brake();}
    //void accelerate(int speed){ElectricCar::accelerate(speed);}
    //void charge();
    ///oid refuel();

private:
   
};
