/*
Courtney Ng
Period
*/

#include <iostream>
using namespace std;

int factorial(int num){
	int product = 1;

	if (num == 1 || num == 0){
		cout << 1;
	}
	else{
		for(int i = num; i > 0; i--){
			product *= i;
		}
	}
	return product;
	
}

int main(){
	int num;
	cout << "Enter a number: ";
	cin >> num;
	factorial(num);
	
}
