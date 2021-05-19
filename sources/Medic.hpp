#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"

namespace pandemic{
    class Medic : public Player{
    public:
        Medic(Board &b, City c) : Player(b, c){this->type = "Medic";}
        Player &treat(City c) override;
    };
}