#pragma once
#include "ElectricEngine.hpp"
#include "Cars.hpp"

class ElectricCar : virtual public Cars
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

