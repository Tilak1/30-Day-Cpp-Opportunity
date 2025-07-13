#include <iostream>
using namespace std;

int main(){

/*for (int i=1; i< n;i+2)
{for (int j=1; j<i;j++)
{
cout<<j;


}*/
int k;
cout<<"Enter the choice for K";
cin>>k;

switch (k)
{
    case 1:
{
        int n1 =5;

        for (int i1=n1; i1!=0;i1--)
        {
            int temp = i1;
            while(temp!=0)
            {
                cout<<temp;
                temp--;
            }
            cout<<endl;
        }


        break;
}

    case 2:
{
        int n2 =6;

        for (int i2=1; i2< n2;i2++)
        {
        int p2 = i2;

        while (p2>0)
        {
            cout << i2;
            p2--;
        }
        cout<<endl;
        }

        break;
}

    case 3:
        {
  int n1 =5;

        for (int i1=n1; i1>=0;i1--)
        {
            for (int j=1; j <=i1;j++){

            cout<<j;
        }
        cout<<endl;
             }

        break;
        }


    case 4:
        {
  int n1 =10;

        for (int i1=1; i1<n1;i1+=2)
        {
            for (int j1=1; j1 <i1+1;j1++){

                cout<<j1;
        }
        cout<<endl;
             }

        break;
        }




    case 5:
        {
  int n1 = 10;

        for (int i1=1; i1<n1;i1+=2)
        {


          for (int l = 0; l < (n1-i1)/2; l++)
            {

                cout << ' ';

            }

            for (int j1=1; j1 <i1+1;j1++){
                cout<<j1;

                }


          for (int l2 = 0; l2 < (n1-i1)/2; l2++)
            {

                cout << ' ';

            }

                cout<<endl;

        }


        break;
        }

    default:
        cout<<"Ivalid chocie";
        break;
}


return 0;
}




