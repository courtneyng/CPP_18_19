/*
Courtney Ng
Period 4
Program Desc: Fibonacci Sequence
*/

#include <iostream>
using namespace std;

int fibo(int n);

int main(){
	int n;
	cout << "Enter a number: ";
	cin >> n;
	cout << fibo(n);
}

int fibo(int n){
	if (n == 1 || n == 0){
		return 1;
	}
	
	else{
		return fibo(n - 1) + fibo(n - 2);
	}
}
