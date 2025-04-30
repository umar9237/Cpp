#include<iostream>
using namespace std;
int main()
{
    string inventory[5]={"sword","shield","bow","potion","axe"};
    string searchitem= "bow";
    bool found=false;
    for(int i=0;i<5;i++){
        if(inventory[i]==searchitem){
            cout<<searchitem<<"found at position "<<i+1<<endl;
            found=true;
            break;
        }
    }
    if(!found){
        cout<<searchitem<<" not found in inventory"<<endl;
    }


    
    }