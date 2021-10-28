#include <iostream>
#include <random>

#include "coin.h"

void Coin::PrintCoin()
{
    std::random_device randomDevice;
    std::default_random_engine randomEngine(randomDevice());
    std::uniform_int_distribution randomDistribution(0, 1);
    for(int i = 0; i< 5; i++)
    {
        std::cout<< (randomDistribution(randomEngine) ? "orel" : "rezhka") <<std::endl;
    }

}
