/*
Author: Courtney Ng
Period 4
Program Description: 
*/

#include <iostream>
using namespace std;
int main(){
	cout << "What is your name?" <<endl;
	string name;
	cin >> name;
	cout << "What year were you born?" << endl;
	int birthday;
	cin >> birthday; 
	cout << name << endl;
	cout << birthday << endl;
	int age;
	age = 2018 - birthday;
	cout << name; cout << " will turn "; cout << age; cout << " by the end of  2018";
}

