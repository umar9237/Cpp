#include<iostream>
using namespace std;

int main(){
    int n,product=1;
    cout<<"Enter how many numbers: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cout<<"Enter number"<<endl;
        cin>>num;
        product*=num;
    }
    cout<<"Total Product "<<product<<endl;

return 0;
}