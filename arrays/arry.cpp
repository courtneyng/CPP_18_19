/*
Courtney Ng
Period 4
*/

#include <iostream>
using namespace std;

int main(){

	int sum = 0, arry[5]; // = {};
	// good morning :)
	//she has beauty, she has grace (that's what i think of u when i see u sleep :))
	for (int i = 0; i < 5; i++){
		cout << "enter a number: ";
		cin >> arry[i];
		sum += arry[i];
	}
	cout << sum;
}
