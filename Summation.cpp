#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter how many numbers"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int num;
        cout<<"enter number"<<endl;
        cin>>num;
        sum+=num;
    }
    cout<<"total sum: "<<sum<<endl;


return 0;
}