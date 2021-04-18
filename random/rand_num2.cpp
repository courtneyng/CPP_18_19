/*
Courtney Ng
Period 4
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	int range = rand() % 6 + 1;
	srand(time(0)); //seeding the rand algorithm
//	srand(1);	//will have a static number set up
	for (int i=0; i<10; i++)
		cout << rand() <<endl;
	
}
