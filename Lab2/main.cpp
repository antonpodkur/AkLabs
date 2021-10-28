#include "coin.h"

int main()
{
   	Coin* coin = new Coin();

    coin->PrintCoin();

    delete coin;

    return 0;
}
