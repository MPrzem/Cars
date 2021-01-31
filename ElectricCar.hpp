#pragma once

#include "ElectricEngine.hpp"
#include "Car.hpp"
class ElectricCar:public virtual Car
{
    ElectricEngine* engine_;
public:
    ElectricCar(ElectricEngine* engine);
    void accelerate(int speed);
    void charge();
    virtual ~ElectricCar();

};

