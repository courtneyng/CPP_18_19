/*
Courtney Ng
Period 4
*/

#include <iostream>
using namespace std;

double mySqrt(double num);
double  mySqrtt(double num);

int main(){
	double num;
	cout << "Pick a number to sqaure root: ";
	cin >> num;
	cout << mySqrt(num) << " \n";
	cout << mySqrtt(num);
}

double mySqrt(double num){
	double guess = 1, newG;
	do{
	newG = (((num/guess) + guess) / 2);
	guess = newG;
	newG = (((num/guess) + guess) / 2);
	}while(guess != newG);
	return newG;
}

double mySqrtt(double num){
	double guess = 1, g1;
	while (guess != g1){
	g1 = guess;
	g1 = (((num/guess) + guess) / 2);
	return g1;
}
}

