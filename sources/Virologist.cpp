#include "Virologist.hpp"

using namespace pandemic;
using namespace std;

Player &Virologist::treat(City c){
   if (this->city != c && this->cards.count(c) == 0){throw std::invalid_argument{" you dont posses the city card "};}
   this->board.reduce_diseaseVirologistEdition(c);
   if (this->city != c){this->cards.erase(c);}
   return *this;
}