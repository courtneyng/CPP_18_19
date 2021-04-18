/*
Courtney Ng
Period 4
Program Desc: Prime number check
*/

#include <iostream>
#include <math.h>
using namespace std;

/* int main(){
	for (int i = 1; i < 101; i++)
		cout << i << endl;
} */
bool primeCheck(int n){
	if (n == 1 || n == 2){
		return true;
	}
	else{
		for (int i = 2; i <= sqrt(n); i++)
			if (n % i == 0){
			return false;	
		}
	}
	return true;
}

int main(){
	int num; bool is_prime = true;
	cout << "Enter a number to check: ";
	cin >> num;	
	for (int i = 2; i <= sqrt(num); i++)
		if (num % i == 0){
			is_prime = false;	
		}
		
		if (is_prime == true){
			cout << "That is a prime number." << endl;	
		}
		else{
			cout << "That is not a prime number." << endl;
		}
}
