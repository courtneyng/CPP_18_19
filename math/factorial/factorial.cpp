/*
Courtney Ng
Period 4
*/

#include <iostream>
using namespace std; 

int fact(int x);
int fact2(int n);

int main(){
	//cout << fact(5);
	cout << fact2(16);
}

int fact(int x){				//regular factorial
	int p = 1;
	if (x == 1 || x == 0){
		return 1;
	}
	
	else{
		for (int i = x; i > 0; i--){
			p*=i;
		}
	}
	return p;
}

//recursion must have a base condition to know when to stop
int fact2(int n){				//recursion for factorial
	if (n ==1){
		return 1;
	}
	
	else{
	return n* fact(n-1);
	}
}
