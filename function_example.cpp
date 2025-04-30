#include<iostream>
using namespace std;
// Function to convert Fahrenheit to Celsius
float tocelsius(float ferinheit){
    return(5.0/9.0)*(ferinheit-32.0);
}
main()
{
    // Set a fahrenheit value
    float f_value=98.8;
     // Call the function with the fahrenheit value
     float result=tocelsius(f_value);
     // Print the fahrenheit value
       cout<<"ferinheit "<< f_value<<endl;
       cout<<"convert ferinheit to celsius "<<result<<endl;
   
}
 