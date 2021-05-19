#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"

namespace pandemic{
    class GeneSplicer : public Player{
    public:
        GeneSplicer(Board &b, City c) : Player(b, c){this->type = "GeneSplicer";}
        Player &discover_cure(Color c) override;
    };
}