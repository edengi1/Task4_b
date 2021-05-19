#include "Dispatcher.hpp"

using namespace pandemic;
using namespace std;

Player &Dispatcher::fly_direct(City c){
    if (this->city == c){throw std::invalid_argument{" same city! "};}
    if (this->board.is_research_station(this->city)){
        this->city = c;
        return *this;
    }
    return Player::fly_direct(c);
}