/*
Courtney Ng
Period 4


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* 
if new index is smaller than the one below (i-1)
then switch the two numbers 
hold i - 1
index i = i-1 slot
hold = current i
repeat
*/


/*
int main(){
	srand(time(0)); //seeds for random each time
	int arr[100] = {}, num, hold, x1, y2, z; //var



	x1 = 2;
	y2 = 3;
	
	cout << x1 << " " << y2 << endl;
	
	z = x1;			//hold takes in the new i to store for later
			
	x1 = y2; 		//sets arr i equal to the one below it (i-1)
			
	y2 = z;
	
	cout << x1 << " " << y2 << endl;
}
*/
#include <iostream>
using namespace std;
/*
void sort(int n);
void swap(int *p1, int *p2);
int a[10]; int low;

int main (){
	for (int i = 0; i < 10; ++i) {
		cout << "Enter array element #" << i << ": ";
		cin >> a[i];
	}
	
	sort(10);
	
	cout << "Here is the array, sorted:" << endl;
	
	for (int i = 0; i < 10; ++i) {
		cout << a[i] << " ";
	}
	return 0;
}


// Sort function: sort array named a with n elements.
//
void sort (int n) {
	int lowest = 0;
	for(int i = 0; i < n - 1; ++i) {
		// This part of the loop finds the lowest
		// element in the range i to n-1; the index
		// is set to the variable named low.
		low = i;
		for (int j = i + 1; j < n; ++j) {
			if (a[j] < a[low]) {
				low = j;
			}
		}
		// This part of the loop performs a swap if
		// needed.
		if (i != low) {
			swap(&a[i], &a[low]);
		}
	}
}
// Swap function.
// Swap the values pointed to by p1 and p2.
//
void swap(int *p1, int *p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
*/
