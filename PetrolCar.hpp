#pragma once

#include "PetrolEngine.hpp"
#include "Car.hpp"
class PetrolCar:public virtual Car
{
    PetrolEngine* engine_;
public:
    PetrolCar(PetrolEngine* engine);
    virtual ~PetrolCar();
    void accelerate(int speed);
    void refuel();


};

