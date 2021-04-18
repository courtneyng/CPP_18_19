/*
Courtney Ng
Period 4
*/

#include <iostream>
using namespace std;

int main(){
	int guess, o, t, h, teens, thou; // ones, tens, hundreds
	
	cout << "Enter a number 1-999: ";
	cin >> guess;
	teens = guess % 100;
	o = guess % 10;						//ones
	guess /= 10;						//tens			//guess % 100 - o;
	t = guess % 10;
	guess /= 10; 						//hundreds		//guess % 1000 - (guess % 100);
	h = guess % 10;
	guess /= 10;
	thou = guess % 10;
	
	
	switch(h){
		case 1: cout << "one hundred "; break;
		case 2: cout << "two hundred "; break;
		case 3: cout << "three hundred "; break;
		case 4: cout << "four hundred "; break;
		case 5: cout << "five hundred "; break;
		case 6: cout << "six hundred "; break;
		case 7: cout << "seven hundred "; break;
		case 8: cout << "eight hundred "; break;
		case 9: cout << "nine hundred "; break;
		default: cout << ""; break;
}
	if (teens > 10 && teens < 20){
		switch(teens){
			case 11: cout <<  "eleven"; break;
			case 12: cout << "twelve"; break;
			case 13: cout << "thirteen"; break;
			case 14: cout << "fourteen"; break;
			case 15: cout << "fifteen"; break;
			case 16: cout << "sixteen"; break;
			case 17: cout << "seventeen"; break;
			case 18: cout << "eighteen"; break;
			case 19: cout << "nineteen"; break;
			default: cout << ""; break;
	}
}
	else{
		switch(t){
			case 1: cout << "ten "; break;
			case 2: cout << "twenty "; break;
			case 3: cout << "thirty "; break;
			case 4: cout << "forty "; break;
			case 5: cout << "fifty "; break;
			case 6: cout << "sixty "; break;
			case 7: cout << "seventy "; break;
			case 8: cout << "eighty "; break;
			case 9: cout << "ninety "; break;
			default: cout << "rip"; break;
		}

		switch(o){
			case 1: cout << "one"; break;
			case 2: cout << "two"; break;
			case 3: cout << "three"; break;
			case 4: cout << "four"; break;
			case 5: cout << "five"; break;
			case 6: cout << "six"; break;
			case 7: cout << "seven"; break;
			case 8: cout << "eight"; break;
			case 9: cout << "nine"; break;
			default: cout << ""; break;
		}
	//cout << t;
}
}

