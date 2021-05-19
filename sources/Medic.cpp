#include "Medic.hpp"

using namespace pandemic;
using namespace std;

Player &Medic::treat(City c){
   if (this->city != c){throw std::invalid_argument{" you are not in city " + CitytoString(c)};}
   this->board.reduce_diseaseMedicEdition(c);
   return *this;
}
