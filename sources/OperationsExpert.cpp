#include "OperationsExpert.hpp"

using namespace pandemic;
using namespace std;

Player &OperationsExpert::build(){
        if (this->board.is_research_station(this->city)){return *this;}
        this->board.build_research_station(this->city);
        return *this;
}