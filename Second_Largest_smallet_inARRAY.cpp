#include<iostream>
#include<climits>
using namespace std;
void findlargsmall(int arr[],int size,int &secondlarg,int &secondsmall){
    int largest=INT_MIN,smallest=INT_MAX;
     secondlarg=INT_MIN,secondsmall=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
         }
         for(int i=0;i<size;i++){
            if(arr[i]>secondlarg && arr[i]<largest){
                secondlarg=arr[i];
            }
            if(arr[i]<secondsmall && arr[i]>smallest){
                secondsmall=arr[i];
            }
         }
    
}
int main(){
    int arr[]={13,17,23,55};
    int size=sizeof(arr)/sizeof(arr[0]);
    int secondlarg,secondsmall;
    findlargsmall(arr,size,secondlarg,secondsmall);
    cout<<"The second largest is: "<<secondlarg<<endl;;
    cout<<"The second smallest is: "<<secondsmall;

return 0;
}