#include <iostream>
#include <fstream>
#include <vector>

#include "../external/json.hpp"
#include "../vehicle.hpp"

#include "../user.hpp"
#include "../train.hpp"

using namespace std;

using json = nlohmann::json;


template <typename T>; 

// read and write in Json 
class FileIO{

private: 
    const string fileName = "db.json"; // name of the file to read/write

public: 
    void saveToFile(T entity); 
    vector<T> readFromFile(); 
}; 


// forward declarations 

template <>
void FileIO<train>::saveToFile(Train entity); 

template <>
vector<train> FileIO<train>::readFromFile(); 

template <>
void FileIO<Vehicle>::saveToFile(vehicle entity); 

template <>
vector<vehicle> FileIO<vehicle>::readFromFile(); 


