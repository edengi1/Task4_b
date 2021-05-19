#include "Researcher.hpp"

const int MINIMAL_CARDS = 5;
using namespace pandemic;
using namespace std;

Player &Researcher::discover_cure(Color c){
    int count = 0;
    for (auto it = this->cards.begin(); it != this->cards.end(); it++){
        if (Board::getCityColor(*it) == c){count++;}
    }
    if (count < MINIMAL_CARDS){throw std::invalid_argument{" Not enough cards "};}
    if (this->board.check_cure(c)){return *this;}
    vector<City> vc;
    for (auto it = this->cards.begin(); it != this->cards.end(); it++){
        if (Board::getCityColor(*it) == c){vc.push_back(*it);}
    }
    for (size_t i = 0; i < MINIMAL_CARDS; i++){cards.erase(vc.at(i));}
    board.add_cure(c);
    return *this;
}