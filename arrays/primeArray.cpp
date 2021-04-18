/*
Courtney Ng
Period 4
*/

#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

bool primeCheck(int n);

int main(){
	srand(time(0));
	int prime[100] = {}, randPrime[100] = {}, index = 0, r; 
	
	for (int i = 2; i < 1000; i++){
		if (primeCheck(i) && index < 100){
			prime[index++] = i;
		}
	}
	for(int i = 0; i < 100; i++){
		cout << prime[i] << endl;
	}
	
	index = 0; //reset
	while (index < 100){
		do{
		r = rand() % 100;
		
		}while (prime[r] == 0);
		randPrime[index++] = prime[r];
		prime[r] = 0;
	}
	
	for(int i = 0; i < 100; i++){
		cout << randPrime[i] << endl;
	}
	
}																	//main

bool primeCheck(int n){
	if (n == 1 || n == 2){
		return true;
	}
	else{
		for (int i = 2; i <= sqrt(n); i++)
			if (n % i == 0){
			return false;	
		}
	}
	return true;
}
