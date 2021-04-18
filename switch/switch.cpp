/*
Courtney Ng
Period 4
Program Desc: Switch
*/

#include <iostream>
using namespace std;

int main(){
	int guess;
	
	cout << "Enter a number between 1 and 999: ";
	cin >> guess;
	
	switch(guess){ //falls through without break;
		case 1:
			cout << "ONE" << endl;
			break;
		case 2: 
			cout << "TWO" << endl;
			break;
		case 3:
			cout << "THREE" << endl;
			break;
		case 4:
			cout << "FOUR" << endl;
			break;
		case 5: 
			cout << "FIVE" << endl;
			break;
		default:
			cout << "That's not a number between 1 and 5" << endl;
	}
}
