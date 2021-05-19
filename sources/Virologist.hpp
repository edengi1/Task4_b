#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"

namespace pandemic{
    class Virologist : public Player{
    public:
        Virologist(Board &b, City c) : Player(b, c){this->type = "Virologist";}
        Player &treat(City c) override;
    };
}