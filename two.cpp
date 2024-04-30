//assignment no:- 2 (bank account) 

#include <iostream>
#include <string.h>
using namespace std; 

class bank{
int acno; 
char nm[100], acc[100];
float bal; 

public: 
bank(int acc_no, char *name, char *acc_type, float balance){
  acno=acc_no; 
  bal=balance; 
  strcpy(nm, name);
  strcpy(acc, acc_type);
}
void deposit();
void withdraw();
void display(); 
};

void bank::deposit(){
  int sum; 
  cout<<"Enter the amount to be deposited: "<<endl; 
  cin>>sum;
  bal+=sum; 
  cout<<"Amount has been deposited."<<endl; 
}

void bank::withdraw(){
  int take; 
  cout<<"Enter the amount to be withdrawed: "<<endl; 
  cin>>take; 
  if (take<=bal){
      bal-=take; 
  }
  else{
      cout<<"Balance insufficient"<<endl; 
  }
}

void bank::display(){
  cout<<"Displaying user information..."<<endl; 
  cout<<"The name is: "<<nm<<endl; 
  cout<<"The account number is: "<<acno<<endl;
  cout<<"The account type is: "<<acc<<endl; 
  cout<<"The current balance is: "<<bal<<endl; 
}

int main(){
  int acc_no; 
  char name[100], acc_type[100];
  float balance; 
cout<<"Enter the name here:"<<endl; 
cin>>name; 
cout<<"Enter the account number here:"<<endl;
cin>>acc_no; 
cout<<"Enter the account type here:"<<endl; 
cin>>acc_type; 
cout<<"Enter the balance here:"<<endl; 
cin>>balance; 

bank b1(acc_no, name, acc_type, balance);
b1.deposit(); 
b1.withdraw(); 
b1.display(); 
return 0; 
}
