#include<iostream>
using namespace std;
int main()
{
    int marks[5]={20,30,40,50};
    cout<<"student marks"<<endl;
    for(int i=0;i<5;i++){
        cout<<"student"<<(i+1)<<":"<<marks[i]<<endl;
    }
}  