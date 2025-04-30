#include<iostream>
#include<string>
using namespace std;
int main()
{
    string games[4]={"freefire","pubg","cod","fortnite"};
    cout<<"games i love: "<<endl;
    for(int i=0;i<4;i++){
        cout<<(i+1)<<games[i]<<endl;
    }
}