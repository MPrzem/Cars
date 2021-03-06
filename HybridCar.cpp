#include "HybridCar.hpp"
#include <iostream>

HybridCar::HybridCar(PetrolEngine* petrolEng, ElectricEngine* electricEng)
    :PetrolCar(petrolEng)
    , ElectricCar(electricEng)
{
    std::cout << __FUNCTION__ << std::endl;
}

HybridCar::~HybridCar()       { std::cout << __FUNCTION__ << std::endl; }
void HybridCar::accelerate(int) { std::cout << __FUNCTION__ << std::endl; }
void HybridCar::charge()        { std::cout << __FUNCTION__ << std::endl; }
void HybridCar::refuel()        { std::cout << __FUNCTION__ << std::endl; }
 

