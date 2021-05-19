#pragma once
#include "City.hpp"
#include "Color.hpp"
#include <map>
#include <set>
#include <iostream>

using namespace std;
namespace pandemic{

    class Board{

    protected:
        set<Color> isCured;
        static map<City, Color> cities_colors;
        set<City> researched;
        map<City, int> cubes;
        static std::map<City, std::set<City>> connections;

    public:
        Board();

        static Color getCityColor(City c);
        static bool is_connected(const City &c1, const City &c2);

        void reduce_disease(City c);
        void reduce_diseaseMedicEdition(City c);
        void reduce_diseaseVirologistEdition(City c);
        void remove_cures();
        void add_cure(Color c);
        void reduce_diseaseFieldDoctorEdition(City c);
        void build_research_station(City c);
        void remove_stations();

        int &operator[](City c);

        bool is_clean();
        bool is_research_station(City c);
        bool check_cure(Color c);
        bool is_cure_discoverd(City c);
        
        friend std::ostream &operator<<(std::ostream &out, Board &b);   
    };
}
