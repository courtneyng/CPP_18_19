/*
Courtney Ng
Period 4
*/

#include <iostream>
using namespace std;

int getNum(){
	int num;
	cout << "Enter a value: ";
	cin >> num;
	return num;
}
int getLow(int x, int y);					//return lower
int getHi(int x, int y);					//return higher
void prints_all_btw(int lo, int hi);		//print integers b/w low and high


int main(){
	int x, y;
	
	x = getNum();
	y = getNum();
	prints_all_btw(getLow(x,y), getHi(x,y));
}


int getLow(int x, int y){			//return low unless =
	if(x > y){
		
		return y;
	}
	
	else if(x < y){
		
		return x;
	}
	
	else{
		return x;
	}
}

int getHi(int x, int y){			//return high unless =
	if(x > y){
		
		return x;
	}
	
	else if(x < y){
		
		return y;
	}
	
	else{
		return x;
	}
}

void prints_all_btw(int lo, int hi){
	int i;
	for (i = lo; i <= hi; i++){
		cout << i << endl;
	}
	
	return; //return where you left off
}
