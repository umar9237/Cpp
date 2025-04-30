#include<iostream>
using namespace std;
int main()
{
    int age1;
    int age2;
    cout<<"enter the age of first friend"<<endl;
    cin>>age1;
    cout<<"enter the age of second friend"<<endl;
    cin>>age2;
    if(age1>age2){
        cout<<"first friend is older than second friend"<<endl;
    }
    else if(age1<age2){
        cout<<"second first is older than second friend"<<endl;
    }
    else{
        cout<<"both friends are same aged"<<endl;
    }
}
