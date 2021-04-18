/*
Courtney Ng
Period 4
*/

#include <iostream>
using namespace std;

void foo(int a[], int n){
	for (int i = 0; i < n; i++){
		cout << a[i] << endl;
	}
}
int main(){
	/*
	int numarray[] = {1,2,3,4,5}; //if put a certain amount in the array, the limit becomes that number? 
	for (int i = 0; i < 10; i++){
		cout << numarray[i] << " ";
	}
	
	int bumarray[10] = {1,2,3,4,5}; //if undef the rest are 0
	for (int i = 0; i < 10; i++){
		cout << bumarray[i] << " ";
	}
	
	char chararray[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75}; 
	for (int i = 0; i < 10; i++){
		cout << chararray[i] << " ";
	}
	*/
	string s, st, strchar = "Hello World!";
	cout << "Enter a string: ";
	cin >> s; 
	cout << "Enter a string pt 2: ";
	cin >> st;
	for (int i = 0; i < 20; i++){
		//cout << strchar[i] << " ";
	}
	
	for (int i = s.length() - 1; i >= 0; i--){
		//cout << strchar[i] << " ";
		cout << s[i] << endl;
	}
	
	for (int i = 0; i < st.length(); i++){
		//cout << strchar[i] << " ";
		cout << st[i] << endl;
	}
}

