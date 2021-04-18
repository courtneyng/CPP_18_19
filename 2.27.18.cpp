/*
Courtney Ng
Period 4
*/

#include <iostream>
#include <string>
using namespace std;

class fullname{
	public:
		
		//members
		string fname;
		string mname;
		string lname;
		
		//memeber function
		void display(){
			cout << fname << " " << mname << " " << lname << endl;
		}
		/*
		fullname myFullname;
		myFullname.fname = "Courtney";
		myFullname.mname = "J";
		myFullname.lname = "Ng";
	
		//cout << myFullname.fname << " " << myFullname.mname << " " << myFullname.lname;
		myFullname.display(); 
	
		fullname yourFullname;
		yourFullname.fname = "Jiewen";
		yourFullname.mname = "";
		yourFullname.lname = "Huang";
		
		yourFullname.display();
		*/
		
//		fullname(){
//			fullname(string f, string m, string l){
//				fname = f;
//				mname = m;
//				lname = l;
//			}
//		}
};

class car{
	public:
		int year;
		int capacity;
		double mpg;
		string brand;
		string model;
		string type;
		string plate;
		string color;
		
		void display(){
			cout << year <<endl;
			//cout << capacity <<endl;
			//cout << mpg <<endl;
			cout << brand <<endl;
			cout << model <<endl;
			//cout << type <<endl;
			cout << plate <<endl;
			cout << color <<endl;
		}
		
		//Constructor
		//a special member function that will run immediately after the creation of an object
		//no return type
		//must be same name (identical) as class
		//CaSe SeNsItIvE
		car(){
			cout << "a car object has been created" << endl;
			color = "red";
		}
//		car myCar; //, yourCar;
//		cout << myCar.color;
		
};

int add(int x, int y){
	return x+y;
}

int add (int x, int y, int z){
	return x+y+z;
}

string add(string a, string b){
	return a+b;
}

string add(int a, string b){
	string temp = "";
	for(int i=0; i<a; i++){
		temp += b;
	}
	return temp;
}
int main(){
	cout << add(add(5,10), 5) << endl;
	cout << add(5+10, 5) << endl;
	cout << add(5, 10,5) << endl;
	cout << add(10,10) << endl;

	cout << add("i crave ","!!") << endl;
	cout << add(4, "twenty ") << endl << endl;
	
	cout << 4+5 << endl;
	cout << 4.11+.22 << endl;
	cout << 'C' + 'N' << endl;
	string h = "hello", g = "goodbye";
	cout << h + g << endl;
	
//	fullname myname;
//	fullname.myname("courtney", "j", "ng");
}

//overloading - when you are overloading functions, you are creating
//multiple definitiions of the functions with the SAME NAME differing
//only in the number of parameters or order.

the addition operator is an example of an OVERLOADED operator beacuse it
can be used to compute

/*
	myCar.brand = "Ford";
	myCar.model = "Mustang GT";
	myCar.year = 1967;
	myCar.color = "Red";
	myCar.plate = "EATDUST";
	myCar.display();
*/
	
