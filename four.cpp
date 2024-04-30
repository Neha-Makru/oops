//assignment no:- 4 matrix operators 

#include <iostream>
using namespace std; 

class MAT{
    int a[2][2];
    
    public:
    void accept(){
        for (int i=0;i<2;i++){
            for (int j=0;j<2;j++){
                cout<<"Enter the element "<<endl;
                cin>>a[i][j]; 
            }
        }
    }
    void display(){
        for (int i=0;i<2;i++){
            for (int j=0;j<2;j++){
                cout<<" "<<a[i][j];
            }
            cout<<" "<<endl; 
        }
    }
    
    MAT operator+(MAT M2){
        MAT M3; 
        for (int i=0;i<2;i++){
            for (int j=0;j<2;j++){
                M3.a[i][j]=a[i][j]+M2.a[i][j];
            }
        }
        return M3; 
    }
    MAT operator-(MAT M2){
        MAT M3; 
        for (int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                M3.a[i][j]=a[i][j]-M2.a[i][j];
            }
        }
        return M3; 
    } 
    MAT operator*(MAT M2){
        MAT M3; 
        for (int i=0;i<2;i++){
            for (int j=0;j<2;j++){
                M3.a[i][j]=0;
                for(int k=0;k<2;k++){
                    M3.a[i][j]=(a[i][k]+M2.a[k][j])+M3.a[i][j];
                }
            }
        }
        return M3; 
    }
};

int main(){
    MAT M1, M2, M3; 
    cout<<"Enter the elements for M1: "<<endl; 
    M1.accept();
    M1.display();
    cout<<"Enter the elements for M2:"<<endl; 
    M2.accept(); 
    M2.display(); 
    cout<<"The addition is: "<<endl; 
    M3=M1+M2; 
    M3.display();
    cout<<"The subtraction is: "<<endl; 
    M3=M1-M2;
    M3.display();
    cout<<"The product is: "<<endl;
    M3=M1*M2; 
    M3.display(); 
    return 0; 
}
