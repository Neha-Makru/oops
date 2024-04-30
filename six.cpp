//assignment no:- 6 (diamond problem)

#include <iostream>
#include <string.h>
using namespace std; 

class person{
    public:
    string name; 
    int code; 
    void getp(){
        cout<<"Enter the name here: "<<endl; 
        cin>>name; 
        cout<<"Enter the code here: "<<endl; 
        cin>>code;
    }
};

class account:virtual public person{
    public:
    long pay;
    void getac(){
        cout<<"Enter the salary here: "<<endl; 
        cin>>pay;
    }
};

class admin: virtual public person{
    public:
    float expe;
    void getad(){
     cout<<"Enter the experience here: "   <<endl; 
     cin>>expe; 
    }
};

class employee:public account, public admin{
    public:
    void display(){
        cout<<"Displaying information...."<<endl; 
        cout<<"Name: "<<name<<endl; 
        cout<<"Code: "<<code<<endl; 
        cout<<"Salary: "<<pay<<endl; 
        cout<<"Experience: "<<expe<<endl; 
    }
}; 

int main(){
    employee e1; 
    e1.getp();
    e1.getac();
    e1.getad();
    e1.display(); 
    
    return 0;
}
