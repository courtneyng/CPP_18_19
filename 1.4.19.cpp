/*
Courtney Ng
period 4
*/

#include <iostream>
using namespace std;

int sumarr(int a[5]){
	int sum=0;
	for(int i=0; i < 5; i++){
		sum += a[i];
	}
	return sum;
}

//change first element to 10
void changevalone(int a[5]){
	a[0] = 10;
}

void change val(int a){
	s = 10;
}

int main(){
	int arr[5] = {1,2,3,4,5};
	changevalone(arr);
	cout << sumarr(arr);
}
