#include "FieldDoctor.hpp"

using namespace pandemic;
using namespace std;

Player &FieldDoctor::treat(City c){
   if (city != c && !Board::is_connected(this->city, c)){throw std::invalid_argument{" City is not connected "};}
   this->board.reduce_diseaseFieldDoctorEdition(c);
   return *this;
}