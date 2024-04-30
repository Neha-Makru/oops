//overloading function in oops 

#include <iostream>
using namespace std; 

float area(float, float);
float area(float); 

int main(){
  int r, b, h; 
  cout<<"Enter the radius of the circle here:"<<endl; 
  cin>>r; 
  cout<<"Enter the base and the height of the traingle here: "<<endl; 
  cin>>b>>h; 
  cout<<"Area of the circle: "<<area(r)<<endl; 
  cout<<"Area of the traingle: "<<area(b,h)<<endl; 
  return 0;
}

float area(float r){
  return (3.14*r*r);
}
float area(float b, float h){
  return (0.5*b*h); 
}
