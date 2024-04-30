//constructors, assignment no:- 5 
//default, multiple, copy, overloaded and destructor 

#include <iostream>
#include <string.h>
using namespace std; 

class Stud{
    private:
    string name; 
    int roll, age; 
    public:
    //default 
    Stud(){
        name=" ";
        roll=0;
        age=0;
        cout<<"Default constructor called"<<endl; 
    }
    //multiple constructor 
    Stud(string n, int r, int a):name(n), roll(r), age(a){
        cout<<"Multiple constructor called"<<endl; 
    }
    //copy constructor 
    Stud(Stud &s):name(s.name), roll(s.roll), age(s.age){
        cout<<"Copy constructor called"<<endl; 
    }
    //overloaded constructor 
    Stud(string n):name(n), roll(0), age(0){
        cout<<"Overloaded constructor called"<<endl; 
    }
    //destructor 
    ~Stud(){
        cout<<"Destructor called"<<endl; 
    }
    void display(){
        cout<<"Displaying student information..."<<endl; 
        cout<<"Name: "<<name<<endl; 
        cout<<"Age: "<<age<<endl; 
        cout<<"Roll Number: "<<roll<<endl; 
    }
};

int main(){
    //default
    Stud stud1;
    stud1.display(); 
    cout<<" "<<endl; 
    //multiple 
    Stud stud2("Neha",13, 19);
    stud2.display();
    cout<<" "<<endl; 
    //copy
    Stud stud3=stud2; 
    stud3.display();
    cout<<" "<<endl; 
    //overloaded 
    Stud stud4("Alice");
    stud4.display(); 
    cout<<" "<<endl;
    return 0; 
}
