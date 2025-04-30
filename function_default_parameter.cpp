#include<iostream>
using namespace std;
void myfunction(string country="iran"){
    cout<<country<<endl;
}
int main()
{
    myfunction("iraq");
    myfunction("pakistan");
    myfunction("bangladesh");
    myfunction(); //This is known as default function
}