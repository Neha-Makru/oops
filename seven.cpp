#include <iostream>
#include <string>
using namespace std; 

class media{
	protected: 
	string title; 
	float price; 
	
	public: 
	media(){
		title=" ";
		price=0.0; 
	}
	media(string t, float p){
		title=t; 
		price=p; 
	}
	virtual void accept(){
		cout<<"Enter the title of the book here: "<<endl; 
		cin>>title; 
		cout<<"Enter the price of the book here: "<<endl;
		cin>>price; 
	}
	virtual void display(){
		cout<<"The title of the book is: "<<title<<endl; 
		cout<<"The price of the book is: "<<price<<endl; 
	}
};

class book: public media{
	int p_count; 
	
	public: 
	book(){
		p_count=0; 
	}
	book(string t, float p, int pc):media(t,p){
		p_count=pc; 
	}
	void accept() override{
		media::accept(); 
		cout<<"Enter the page count here: "<<endl; 
		cin>>p_count; 
	}
	void display() override{
		media::display(); 
		cout<<"The page count is: "<<p_count<<endl; 
	}
};

class CD:public media{
	float time; 
	public:
		CD(){
			time=0.0;
		}
		CD(string t, float p, float tim) : media(t, p) {
			time = tim;
		}
		void accept() override{
			media::accept();
			cout<<"Enter the play time of the book here: "<<endl; 
			cin>>time; 
		}
		void display() override {
			media::display();
			cout<<"Time in minutes: "<<time<<endl;
		}
};

int main(){
	cout<<"Book information"<<endl; 
	book bo; 
	bo.accept(); 
	cout<<"CD information"<<endl; 
	CD cd; 
	cd.accept(); 
	cout<<"Displaying information"<<endl; 
	cout<<"Book information"<<endl; 
	bo.display();
	cout<<"CD information"<<endl; 
	cd.display(); 
	return 0; 
}
