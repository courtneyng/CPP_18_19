//Jiewen Huang
//PD 4

#include <iostream>
using namespace std;

int main(){
	char arr[3][3];
	char temp='1';
	char input;
	char turn;
	
	for(int r=0;r<3;r++){
		for(int c=0;c<3;c++){
			arr[r][c]=temp;
			temp++;
		}
		cout<<endl;
	}
	
	//print again
	for(int r=0;r<3;r++){
		for(int c=0;c<3;c++){
			cout<<arr[r][c];
		}
		cout<<endl;
	}
	
	
	for(int i=0;i<9;i++){
		if(i%2==0)
			turn= 'X';
		else
			turn= 'O';
		
		cout<<"Enter a the number that you want either the 'X' or 'O' to be placed: ";
		cin>>input;
		
		//assign that number with an 'x'
		for(int r=0;r<3;r++){
			for(int c=0;c<3;c++){
				if(arr[r][c]==input)
				arr[r][c]= turn;
			}
		}
	
	
			//print again
		for(int r=0;r<3;r++){
			for(int c=0;c<3;c++){
				cout<<arr[r][c];
			}
			cout<<endl;
		}		
	}
}


