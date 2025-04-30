#include<iostream>
using namespace std;
void findsumaverage(int arr[],int size,int &sum,double &avg){
    sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    avg=(double)sum/size;
}
int main(){
    int arr[]={17,5,4,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum;
    double avg;
    findsumaverage(arr,size,sum,avg);
    cout<<"Sum= "<<sum<<" and average is= "<<avg<<endl;

return 0;
}