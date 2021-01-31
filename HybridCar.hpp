#include "ElectricCar.hpp"
#include "PetrolCar.hpp"

class HybridCar:public PetrolCar, public ElectricCar
{
public:
    HybridCar(PetrolEngine* petrolEng, ElectricEngine* electricEng);
    ~HybridCar();
    void accelerate(int speed);
    void charge();
    void refuel();
};

