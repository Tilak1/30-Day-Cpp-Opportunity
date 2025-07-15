#include <iostream>
using namespace std;


class Car {

    private:
    int price;
public:
void set_price(int p)
{
price = p;
cout<<"price:"<<price<<endl;

}
int get_price() const
{
return price;}

};

int main() {
    Car hello;
    hello.set_price(100); // This line will cause an error since carprice is not defined in the class
    cout<< "Car price is: " << hello.get_price() << endl; // This will also cause an error since get_price does not return a value
    return 0;
}
