/* 
Courtney Ng
Period 4
Program Desc:
*/

#include <iostream> 
#include <math.h>
using namespace std;

int main(){
	int num = 0; int i = 0; int sum = 0;
	cout << "Please enter a number to count up to: ";
	cin >> num;
	for (i; i <= num; i++){
		//sum += i;
		sum = sum + pow(i,2);
		if(i == num) //show the numbers adding up
			cout << i;
		else{
			cout << i << " + ";
		}
	}
	cout << "\nThe sum is: " << sum;
}
