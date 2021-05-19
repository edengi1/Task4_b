#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"

namespace pandemic{
    class Researcher : public Player{
    public:
        Researcher(Board &b, City c) : Player(b, c){this->type = "Researcher";}
        Player &discover_cure(Color c) override;
    };
}