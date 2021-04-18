/*
Courtney Ng
Period 4
Program Description: Practice with if statements
*/

#include <iostream>
using namespace std;

int main(){
	cout << "NBA player			Number of points scored" << endl;
	cout << "Kareem Abdul-Jabbar			38,387" << endl;
	cout << "Karl Malone				36,928" << endl;
	cout << "Kobe Bryant				33,643" << endl;
	cout << "Michael Jordan				32,292" << endl;
	string newPlayer;
	cout << "What is the name of the new player? ";
	cin >> newPlayer;
	int points;
	cout << "\nWhat is their number of points scored? ";
	cin >> points;
	cout << newPlayer << endl;
	cout << points << endl;
}
