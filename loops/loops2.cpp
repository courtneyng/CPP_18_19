/*
Courtney Ng
Period 4
Program Description: Use of loops
*/

#include <iostream>
using namespace std;

int main(){
	int i = 0; float grade = 0; int total = 0; float avg;
	while(i<10){ //while
		do{
		cout << "Enter a grade between 1-100: ";
		cin >> grade;
		} while(grade > 100 || grade < 0);
		total += grade;
		i = i+1;
	}
	avg = total/i;
	cout << "Average: " << avg;
} //MAIN
	
