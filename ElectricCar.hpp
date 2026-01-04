#pragma once
#include "ElectricEngine.hpp"
#include "Car.hpp"

class ElectricCar : virtual public Car
{
public:
    ElectricCar(ElectricEngine* engine);
    ~ElectricCar();
    void charge();
    void refill() override;
    void changeEngine(ElectricEngine* engine); 
private:
    ElectricEngine* engine_;
};

