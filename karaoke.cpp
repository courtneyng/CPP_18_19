/*
Courtney Ng
Period 4
*/

/*
This program will emulate a typing karaoke machine
This proigram will incorporate a file which all contain lyrics to a song
It will load each line of lyric on screen and convert the line into a series 
of underscores (san punctuations and spaces)
below the underscores, the usert will type the line of lyric
the computer will determine if the user input is correct

the next line of underscores will be displayed and user inputs until the end of the song

keep count of the number of correct lines
output the result

spelling matters, caps is optional
but you should ignore it.
*/

#include <iostream>
#include <fstream>
using namespace std;

void displayline(string s){
	for(int i=0; i<s.length(); i++){
		if(ispunct(s[i]) or s[i] == ' '){
			cout << s[i];
		}
		
		else{
			s[i] = '_';
			cout << s[i] << " ";
		}
	}
}


int main(){
	/*
	ofstream fout;
	fout.open("song.txt");
	*/
	
	ifstream fin;
	fin.open("song.txt");
	string line, ans;
	
	cout << "this is karaoke, your only song choice currently is Starman - David Bowie." << endl << endl;
	// while you can read the song...	
	while(getline(fin, line)){
		displayline(line);
		cout << endl;
		getline(cin, ans);
		//cout << line << endl;
	}
	
	/*
	if(tolower(s) == tolower(line)){
		cout << 'correct';
	}
	
	else{
		cout << 'incorrect;
	}
	*/
	
	
}
