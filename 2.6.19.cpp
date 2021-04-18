/*
Courtney Ng
Period 4
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//boards: cpu & player
char cpuboard[10][10];
char playerboard[10][10];

//ships

//checks
bool checkFull(char board[10][10]){
	
}

//printing board
char alpha[15] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
void undscrs(char board[10][10], int row, int col);
void printBoard(int row, int col);


/********************************************* MAIN *********************************************/
int main(){
	int row = 10, col = 10, ans;

	/*** board ***/
	system("cls"); // clear setup
	//prints board to start
	undscrs(playerboard, row, col);
	printBoard(row, col);
}
/********************************************* MAIN *********************************************/


//change board to underscores
void undscrs(char board[10][10], int row, int col){
	cout << "  ";
	for(int r = 0; r < row; r++){
		cout << alpha[r] << " ";
	}
	cout << endl;
	for(int r = 0; r < row; r++){
		for(int c = 0; c < col; c++){
			board[r][c] = '_';
		}
	}
}

//print board
void printBoard(int row, int col){
	for(int r = 0; r < row; r++){
		cout << r << " ";
		for(int c = 0; c < col; c++){				
			cout << playerboard[r][c] << " "; 
		}
		cout << endl;
	}
	
	cout << endl;
}

//0 = horizontal
//1 = vertical

char aircraft(){
	//5 spots
	if(orientation == 1){
		
	}
}

char battleship(){
	//4 spots	
}
char cruiser(){
	//3 spots
}
char submarine(){
	//3 spots	
} 
char destroyer(){
	//2 spots	
}



