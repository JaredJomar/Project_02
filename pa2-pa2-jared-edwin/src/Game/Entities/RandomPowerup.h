#pragma once
#include "Powerup.h"
#include "Player.h"

class RandomPowerup : public Powerup {
    public:
        RandomPowerup(Player* p);
        void activate();
        Player* p;
        
};