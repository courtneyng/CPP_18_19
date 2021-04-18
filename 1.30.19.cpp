/*
Courtney Ng
Period 4
*/

#include <iostream>
using namespace std;

bool is_pal(string s){
	string temp = "";
	
	for(int i = s.length() - 1; i >= 0; i--){
		temp = temp + s[i];
	}
	
	return temp == s;
}

int main(){
	string word = "tacocat";
	cout << is_pal(word);
}


