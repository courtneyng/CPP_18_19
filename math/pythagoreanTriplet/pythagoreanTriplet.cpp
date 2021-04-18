/*
Courtney Ng
Period 4
*/

#include <iostream>
using namespace std;

int main(){
	int a, b, c, n, m, x;
	
	/*
	cin >> m;
	cin >> n;
	
	if (m < n){
		a =  (n*n) - (m*m);
		b = 2 * m * n;
		c =  (n*n) + (m*m);
		cout << a << ", " << b << ", " << c << endl;
		
		x = a + b + c;
		cout << x;
		
		if (x == 1000){
			cout << a << ", " << b << ", " << c << endl;
		}	
	}*/
	
	//200 375 425

	for (int c = 5; c < 1000; c++){
		for(int b = 4; b < c; b++){
			for(int a = 3; a < b; a++){
				if(a+b+c == 1000 && a*a + b*b == c*c)	{
					cout << a << ", " << b << ", " << c << endl;
				}
				else{
					cout << ":P";
				}
			}
		}
	}		
}
