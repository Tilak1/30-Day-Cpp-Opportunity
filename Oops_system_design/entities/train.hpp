#include <iostream>
#include <time.h>
#include <vector>
#include "user.hpp"

using namespace std;


struct train{
    string trainId; 
    string name; 
    string source; 
    string destination;
    string timings;
    time_t time; 

    vector<vector<user>> seats; 
}