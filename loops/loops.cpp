/*
Courtney Ng
Period 4 
Program Description: Looping
*/

#include <iostream>
using namespace std;

int main(){
	int number = 1;
	while (number < 1001){
		if (number % 3 == 0 && number % 7 == 0){
			cout << number <<endl;
		}
		number = number + 1;
	}
}
