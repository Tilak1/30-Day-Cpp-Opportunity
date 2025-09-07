#include <iostream>

using namespace std;

template <typename T>

class base{

private:
T first, second;

public:

//base (T f) : first(2*f)  {}
base (T f, T s) : first(f), second(s)  {}

void printObjMembers()
{

    cout<<"First and Second\t"<<first<<"\t"<< second<<endl;
}

int getFirst()
{ return first;
}

int getSecond()
{ return second;
}

};



int main(){

base <int>intObj(3,2);
//base intObjSingle(6);

cout << "intObj first Member\t" << intObj.getFirst()<<endl;

//cout << "intObjSingle first Member\t" << intObjSingle.getFirst()<<endl;


base <double> doubleObj(3.4,2.6);

//intObj.printObjMembers();
doubleObj.printObjMembers();

base <string>StringObj("Hellpo", "HelloAgaon");
StringObj.printObjMembers();

return 0;

}
