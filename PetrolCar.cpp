#include "PetrolCar.hpp"

 
PetrolCar::PetrolCar(PetrolEngine* engine)
    : engine_(engine)
{
    std::cout << __FUNCTION__ << std::endl;
}

PetrolCar::~PetrolCar()         { 
    delete engine_;
    std::cout << __FUNCTION__ << std::endl; }
//void PetrolCar::turnLeft()      { std::cout << __FUNCTION__ << std::endl; }
//void PetrolCar::turnRight()     { std::cout << __FUNCTION__ << std::endl; }
//void PetrolCar::brake()         { std::cout << __FUNCTION__ << std::endl; }
//void PetrolCar::accelerate(int) { std::cout << __FUNCTION__ << std::endl; }
void PetrolCar::refuel()        { std::cout << __FUNCTION__ << std::endl; }
void PetrolCar::refill(){refuel();}
void PetrolCar::ChangeGear(int gear){this->engine_->changeGear(gear);};

