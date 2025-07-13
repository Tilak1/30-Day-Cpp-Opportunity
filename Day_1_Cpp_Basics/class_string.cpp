#include <iostream>
#include <string>

using namespace std;

int main (){

string greet = "Hello world";
cout << "Greet Before:"<<" "<<greet<<endl;

string sub = greet.substr(0,5);

int found = greet.find("world");
cout << "found :" <<" "<< found<<endl;

greet.replace(found,5,"Tilak"); // start at found, and frmo there replace 5 len char in the original array

// We get the length dynamically - not static
//greet.replace(found,std::string("world").length(),"Tilak");

// Here I get Hello Tilakorld - coz from 5th pos, replaced only w and kept Tilak in place of w
// greet.replace(found,1,"Tilak");

cout<<"Greet Now:"<<" "<<greet<<endl;

return 0;}


