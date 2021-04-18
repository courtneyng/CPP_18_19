/*
Courtney Ng
Period 4
*/

#include <iostream>
using namespace std;

int gcf(int a, int b);

int main(){
	int a, b;
	cout << "enter two numbers to find gcf.\n" << "enter a: ";
	cin >> a;
	cout << "enter b: ";
	cin >> b;
	cout << gcf (a, b);
}

int gcf(int a, int b){
	if (b == 0){
		return a;
	}
	else{
		return gcf(b, a%b);
	}
}
