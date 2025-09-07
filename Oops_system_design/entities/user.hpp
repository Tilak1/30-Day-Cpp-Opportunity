// std library has its own list hashmap set 

#include <iostream>
#include <string>
#include <vector>
#include "train.hpp" // include train.hpp to use the train struct

using namespace std;


struct user{
    string userId; 
    string name; 
    string aadharcardNumber; 
    vector<train> entities; // list of train ids booked by the user

}

