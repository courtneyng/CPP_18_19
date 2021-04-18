/*
Courtney Ng
Period 4
*/

#include <iostream>
using namespace std;

int minval(int x, int y, int z);						//min value
int maxval(int x, int y, int z);						//max value
void printStuff(int x, int y, int z);					//prints the things ;D

int main(){												//MAIN FUNCTION
	int x, y, z;
	cout << "Enter 3 numbers to find the smallest and largest value: ";
	cin >> x;
	cin >> y;
	cin >> z;
	printStuff(x ,y, z);	
}

int minval(int x, int y, int z){						//minval
	if (x < y && x < z){
		return x;
	}
	
	else if (y < x && y < z){
		return y;
	}
	
	else if (z < x && z < y){
		return z;
	}
	
}

int maxval(int x, int y, int z){						//maxval
	if (x > y && x > z){
		return x;
	}
	
	else if (y > x && y > z){
		return y;
	}
	
	else if (z > x && z > y){
		return z;
	}
}

void printStuff(int x, int y, int z){					//printStuff
	cout << "smallest: " << minval(x , y, z) << endl;
	cout << "largest: " << maxval(x, y, z) << endl;
	return;
}
