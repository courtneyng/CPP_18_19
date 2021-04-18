/*
Courtney Ng
Period 4
*/

#include <iostream>
using namespace std;

int square(int n);

int main(){
	int n;
	cout << "Enter a number: ";
	cin >> n;
	cout << square(n);
}

int square(int n){
	if (n == 1){
		return 1;
	}
	else{
		return square(n-1) + 2*n -1;
	}
}
