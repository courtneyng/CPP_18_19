/*
Courtney Ng
Period 4
*/

#include <iostream>
#include <string>
using namespace std;

class name{
	public:
	string fname;
	char MI;
	string lname;
};

int main(){
	/*
	string fname = "John";
	string lname = "Krasinski";
	cout << fname << " " << lname;
	*/
	
	name actor1;
	actor1.fname = "John";
	actor1.lname = "Krasinski";
	
	cout << actor1.fname << " " << actor1.lname;
	
	
}
