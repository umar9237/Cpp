#include<iostream>
using namespace std;
void evenodd(int arr[],int size,int &even,int &odd){
    even=0;
    odd=0;
      for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
}
int main(){
    int arr[]={2,7,10,3,9,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int even,odd;
    evenodd(arr,size,even,odd);
    cout<<"Even count: "<<even<<endl;
    cout<<"Odd count: "<<odd<<endl;


return 0;
}