#include <iostream>
using namespace std;

int main(){
	cout << "a\n\nbb\n\nccc\n\ndddd\n\neeeee\n" <<endl;
	int numbers = 4096 + 4096;
	cout << "The sum of 4096 and 4096 is: "; cout << numbers << endl;
	int sum1 = 64;
	int sum2 = 64;
	int sum = sum1 + sum2;
	cout << "The sum of 64 and 64 is: "; cout << sum <<endl;
	cout << "\n\nPlease pick two numbers";
	int firstnum;
	int secondnum;
	int bothnum;
	cin >> firstnum;
	cin >> secondnum;
	bothnum = firstnum + secondnum;
	cout << "The sum of your numbers are: "; cout << bothnum;
}


