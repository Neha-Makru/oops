//assignment no:- 8 
//this, new and delete pointers 

#include <iostream>
#include <string.h> 
using namespace std; 

class Car{
    private:
    string model; 
    
    public:
    //constructor 
    Car(const string &m){
        model=m; 
        cout<<model<<" has been manufactured"<<endl; 
    }
    // displaying the model 
    void display(){
        cout<<"The model of the car is: "<<model<<endl; 
    }
    //updating, using this pointer 
    void set(const string &m){
        this->model=m;
        cout<<"The updated model is: "<<model<<endl; 
    }
    //destructor 
    ~Car(){
        cout<<model<<" has been sold out"<<endl; 
    }
};

int main(){
    string ini; 
    cout<<"Enter the model of the car here: "<<endl; 
    getline(cin, ini); 
    
    //setting the value using new pointer 
    
    Car* car=new Car(ini); 
    //display 
    car->display(); 
    //update the model of the car 
    string update;
    cout<<"Enter the updated model of the car here: "<<endl; 
    cin>>update; 
    car->set(update);
    car->display(); 
    delete car; 
    return 0; 
}
