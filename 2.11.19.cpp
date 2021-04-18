/*
Courtney Ng
Period 4
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));
	ofstream fout; //create output stream object
	ifstream fin; 
	int num;
	
	//connect to file
	fout.open("numbersP4.txt"); //name of the file
	
	
	for(int i = 0; i <= rand()%1000000; i++){
		fout << rand()%1000 << endl;
		//fin >> num;
		//cout << i << endl;
	}
	
	fout.close();
	fin.open("numbersP4.txt");
	
	
	while(fin >> num){
		cout << num << endl;
	}
}


