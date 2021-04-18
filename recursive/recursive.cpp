/*
Courtney Ng
Period 4
*/

#include <iostream>
using namespace std;

void printbtw(int x, int y);

int main(){
	int x, y;
	cout << "Enter two numbers:\n";
	cin >> x;
	cin >> y;
	printbtw(x,y);
}

void printbtw(int x, int y){
	if (x < y){
		for (x; x <= y; x++){
			cout << x << endl;	
		}
	}
	else if(y < x){
		for (y; y <= x; y++){
			cout << y << endl;
		}
	}
	else{
		cout << x;
	}
}

//int(2.6 * m - 0.2)
