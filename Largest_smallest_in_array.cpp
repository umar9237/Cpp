#include<iostream>
using namespace std;
void findlargestandsmallest(int arr[],int size,int&largest,int&smallest){
     largest=arr[0];
     smallest=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
}
int main(){
    int arr[]={12,15,7,19,13};
    int size=sizeof(arr)/sizeof(arr[0]);
    int largest,smallest;
   findlargestandsmallest(arr,size,largest,smallest);
    cout<<"The Largest Integar is: "<<largest<<endl;
    cout<<"The smallest Integar is:  "<<smallest<<endl;
   
return 0;
}