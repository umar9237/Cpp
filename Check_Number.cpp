#include<iostream>
using namespace std;
void checknum(int arr[],int size,int search){
    bool found=false;
    for(int i=0;i<size;i++){
        if(arr[i]==search){
            found=true;
            break;
        }
    }
    if(found){
      cout<<"Found."<<endl;
    }
    else{
      cout<<"Not Found"<<endl;
    }
         
}
 int main()
 {
    int arr[]={13,17,20,44};
    int size=sizeof(arr)/sizeof(arr[0]);
    int search=20;
    checknum(arr,size,search);


return 0;
 }