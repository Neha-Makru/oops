//assignment no:- 12 calculator program 

#include <iostream>
using namespace std; 

int main(){
    double a, b; 
    int op; 
    cout<<"Menu"<<endl; 
    cout<<"1.Add\n2.Subtract\n3.Multiply\n4.Division"<<endl;
    cout<<" "<<endl; 
    cout<<"Enter the first number here: "<<endl;
    cin>>a;
    cout<<"Enter the second number here: "<<endl; 
    cin>>b; 
    cout<<"Enter the option here: "<<endl; 
    cin>>op; 
    
    switch(op){
        case 1:
        cout<<a+b<<endl; 
        break; 
        case 2:
        cout<<a-b<<endl; 
        break; 
        case 3: 
        cout<<a*b<<endl; 
        break; 
        case 4: 
        if (b==0){
            cout<<"Division by zero is not defined"<<endl; 
        }
        else{
            cout<<a/b<<endl; 
        }
        break; 
        default:
        cout<<"Invalid option selected"<<endl; 
    }
    return 0; 
}
