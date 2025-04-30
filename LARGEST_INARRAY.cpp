#include<iostream>
using namespace std;
int findlarg(int arr[],int size){
    if(size<=0) return 0;
    int largest=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
     
}
int main(){
    int arr[]={12,30,-400,40,};
    int size=sizeof(arr)/sizeof(arr[0]);
    int largest=findlarg(arr,size);
    cout<<"The largest number in this array is: "<<largest<<endl;


return 0;
}