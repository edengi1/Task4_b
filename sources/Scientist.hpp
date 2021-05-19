#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"

namespace pandemic{
    class Scientist : public Player{
    private:
        int n;
    public:
        vector<City> getColors(Color color);
        Scientist(Board &b, City c, int number) : Player(b, c), n(number){this->type = "Scientist";}
        Scientist &discover_cure(Color c) override;
    };
}