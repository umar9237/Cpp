#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
       
    }
     return -1;
}
int main(){
    int arr[]={20,50,60,71,100,50,65};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=70;
    int result=linearsearch(arr,size,target);
    if(result!=-1){
        cout<<"Number found at index "<<result<<endl;
    }
    else{
       cout<<"Number not found"<<endl;
    }



return 0;
}