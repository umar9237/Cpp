#include<iostream>
using namespace std;
int main(){
    int target=6;
    int arr[2][3]={{1,2,3},{8,5,9}};
    bool found=false;
    for(int row=0;row<2;row++){
        for(int col=0;col<3;col++){
            if(arr[row][col]==target){
                cout<<"target is at "<<row<<" "<<col;
                found=true;
                break;
            }
            
                
            }
           
            
            }
            if(!found){
                cout<<"Not Found"<<endl;
            
          
        }
        return 0;

    }

