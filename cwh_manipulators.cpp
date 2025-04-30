#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=10,b=20,c=1233;
    // cout<<"Without manipulators"<<endl;
    // cout<<"value of a is: "<<a<<endl;
    // cout<<"value of b is: "<<b<<endl;
    // cout<<"value of c is: "<<c<<endl;

    cout<<"Without manipulators"<<endl;
    cout<<"value of a is: "<<setw(4)<<a<<endl;
    cout<<"value of b is: "<<setw(4)<<b<<endl; 
    cout<<"value of c is: "<<setw(4)<<c<<endl;

     //operator precedence//for sequence of arithmentic operations
    //  int a=3,b=4;
    //  //int c=a*5+b-45+87
    //  //from left to right
    //  int c=((((a*5)+b)-45)+87);
    //  cout<<c;
     }