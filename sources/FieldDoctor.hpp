#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"

namespace pandemic{
    class FieldDoctor : public Player{
    public:
        FieldDoctor(Board &b, City c) : Player(b, c){this->type = "FieldDoctor";}
        Player &treat(City c) override;
    };
}