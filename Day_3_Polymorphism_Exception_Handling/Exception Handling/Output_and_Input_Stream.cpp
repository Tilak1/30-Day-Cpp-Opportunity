#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){



int n;
cout<<"Enter 1 for file write and 2 for same file read ";
cin>>n;





switch(n){

    case 1: {
        ofstream outFile("example1.txt");
        if (outFile.is_open()){
            cout<<"Opened File successfully"<<endl;
            outFile<<"hello"<<endl;
            outFile<<"Testing file"<<endl;
            outFile.close();
            cout<<"File closed"<<endl;
        }
        else{

            cout<<"Error while opening the file"<<endl;
        }
        break;
}

    case 2:
    {

        ifstream  inFile("example1.txt");
        if (inFile.is_open())
        {   cout<<"File opened"<<endl;
            string line;
            while(getline(inFile,line))
            {
                cout<<line<<endl;

            }
            inFile.close();
        }
        else{

            cout<<"Error while opening the file"<<endl;
        }
        break;
    }

    default: cout<<"Invalid choice"<<endl; }



return 0 ; }
