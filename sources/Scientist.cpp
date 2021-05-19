#include <algorithm>
#include <vector>
#include <vector>
#include "Scientist.hpp"

using namespace pandemic;
using namespace std;

vector<City> Scientist::getColors(Color color){
    vector<City> vc;
    for (const auto &x : this->cards){
        if (Board::getCityColor(x) == color){vc.push_back(x);}
    }
    return vc;
}
Scientist &Scientist::discover_cure(Color c){
    if (this->board.check_cure(c)){return *this;}
    if (this->board.is_research_station(this->city)){
        vector<City> vc = getColors(c);
        int count = vc.size();
        if (count >= this->n){
            for (size_t i = 0; i < this->n; i++){cards.erase(vc.at(i));}
            board.add_cure(c);
        }
        else{throw std::invalid_argument{" Not enough cards "};}
    }
    else{throw std::invalid_argument{" Not heve research station "};}
    return *this;
}

