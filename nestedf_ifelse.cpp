#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter an integar"<<endl;
    cin>>num;
    if(num!=0){
        if(num>0){
            cout<<"number is positive"<<endl;
        }
        else{
        cout<<"number is negative"<<endl;
        }
    }
    else {
        cout<<"number is 0 and it is neither positive and neither negative "<<endl;
    }
} 