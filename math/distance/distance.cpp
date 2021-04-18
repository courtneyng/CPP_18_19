/*
Courtney Ng
Period 4
*/

#include <iostream>
#include <math.h>
using namespace std;

double sqrt(double num);
double dist(int x1, int y1, int x2, int y2);

int main(){
	double x1, y1, x2, y2, c;
	cout << "enter a point: ";
	cin >> x1 >> y1;
	
	cout << "enter second point: ";
	cin >> x2 >> y2;
	
	cout << dist(x1, y1, x2, y2);
}

double sqrt(double num){
	double guess = 1, newG;
	do{
	newG = (((num/guess) + guess) / 2);
	guess = newG;
	newG = (((num/guess) + guess) / 2);
	}while(guess != newG);
	return newG;
}

double dist(int x1, int y1, int x2, int y2){
	return sqrt(pow((x2-x1), 2) + pow((y2-1), 2));
}

