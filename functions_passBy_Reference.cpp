#include<iostream>
using namespace std;
void swapNums(int &x,int &y){
    int z=x;
    x=y;
    y=z;
}
main()
{
    int firstnum= 10;
    int secondnum= 20;
    cout<<"before swap"<<endl;
    cout<<firstnum << secondnum<<endl;
    //call a function,which will change the values of firstnum and secondnum
   swapNums(firstnum,secondnum);
    cout<<"after swap"<<endl;
    cout<<firstnum<<secondnum<<endl;
    return 0;

}