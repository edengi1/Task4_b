#include "GeneSplicer.hpp"

const int MINIMAL_CARDS = 5;
using namespace std;
using namespace pandemic;

Player &GeneSplicer::discover_cure(Color c){
        if (this->board.is_research_station(this->city)){
                size_t size = cards.size();
                if (size < MINIMAL_CARDS){throw std::invalid_argument{" player dosen't have a minimum 5 cards of that color "};}
                if (this->board.check_cure(c)){return *this;}
                vector<City> vc;
                for (auto it = this->cards.begin(); it != this->cards.end(); it++){vc.push_back(*it);}
                for (size_t i = 0; i < MINIMAL_CARDS; i++){cards.erase(vc.at(i));}
                board.add_cure(c);
                return *this;
        }
        throw std::invalid_argument{" current city does not have a research center"};
}