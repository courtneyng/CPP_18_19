/*
Courtney Ng
Period 4
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* 
if new index is smaller than the one below (i-1)
then switch the two numbers 
hold i
index i = i-1 slot
i-1 = hold
repeat
*/



int main(){
	srand(time(0)); //seeds for random each time
	int arr[1000] = {}, large[3] = {}, num, hold, hi; //var
	

	
	for (int i = 0; i < 1000; i++){ //give arr[i] random numbers
		num = rand() % 1000;
		arr[i] = num;
		cout << i << ": " << arr[i] << endl;
		
		
		//switches two numbers if i is less than i-1
		/*
		if(arr[i] < arr[i-1] && i > 0){
			hold = arr[i];			//hold takes in the new i to store for later
			
			arr[i] = arr[i-1]; 		//sets arr i equal to the one below it (i-1)
			
			arr[i-1] = hold;		//sets i-1 equal to new i (which is less than it)
		}
		*/
		
		//cout << i << ": " << arr[i] << " new " << endl;
		
	}
	
	for (int x = 0; x < 3; x++){
		hi = 0;
		for (int i = 0; i < 1000; i++){  //gets hi
			if(hi < arr[i]){
				hi = arr[i];	
			}
		}
		for (int i = 0; i < 1000; i++){  //sets hi to 0
			if(hi == arr[i]){
				arr[i] = 0;	
			}
		}
		cout << "\n" << "the largest number: " << hi << endl;
	}
	
	
	
	/*
	do{
			hold = arr[i];			//hold takes in the new i to store for later
			
			arr[i] = arr[i-1]; 		//sets arr i equal to the one below it (i-1)
			
			arr[i-1] = hold;		//sets i-1 equal to new i (which is less than it)
		}while(arr[i] < arr[i-1]); //while new i is less than old i
	*/
	
	
	
	//cout << "\n\n the largest numbers are: " << arr[99] << "," << arr[98] << "," << arr[97] << endl;
	
}

