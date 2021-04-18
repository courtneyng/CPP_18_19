/*
Courtney Ng
Period 4
Program Desc: 
*/

#include <iostream>
using namespace std;

int main(){
	int count = 0; float grade = 0; int total = 0; float avg;
	
	do{
		cout << "(" << count << ")" << "Enter a grade: ";
		cin >> grade;
		total += grade;
		count++;
			
	} while (grade >= 0);
	
	total -= grade;
	count--;
	avg = total/count;	
	cout << "Average: " << avg;
	
	/*while(grade >= 0){ //while
		if (grade >= 0){ //start if
			cout << "(" << count << ")";
			cout << "Enter a grade between 1-100: ";
			cin >> grade;
			if(grade >= 0){
				total += grade;
			}
			else{
				avg = total/count;	
				cout << "Average: " << avg;
			}
		} //end if
		
		count++;
		
	}
	*/
	
} //MAIN
	
