//assignment 10 (try and catch)

#include <iostream>
using namespace std; 

int main(){
    double num, den, dive; 
    cout<<"Enter the numerator here: "<<endl; 
    cin>>num; 
    cout<<"Enter the denominator here: "<<endl; 
    cin>>den; 
    try{
        if(den==0){
            throw 0; 
        }
        else{
            dive=num/den;
            cout<<"The result is: "<<dive<<endl; 
        }
    }
    catch(int num_excpetion){
        cout<<"Division by zero is not defined. "<<endl; 
    }
    return 0; 
}
