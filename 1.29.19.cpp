/*
Courtney Ng
Period 4
*/

#include <iostream>
#include <string>
#include <strings.h>
using namespace std;

int main(){
	/*****************************************************************************************
		string manipulation functions
		strcpy(s1, s2) copies the content of s2 onto s1
		strcat(s1, s2) concatenate
		strlen(s) return the lenght of string s(not includingg the terminating null)
		s.substr(n1 ,n2) returns the characters of string s starting from index n1
		for n2 amount of characters
		s.substr(n1) returns the characters of string s starting from n1 to the end

		write a function called is_pal(string s)
		will return whether or not string s is a palindrome
	*****************************************************************************************/
	
	/*
		racecar
		radar
		mom, dad
		tacocat
		a nut for a jar of tuna
		madam im adam
		was it a cat i saw
		Are we not pure? “No, sir!” Panama’s moody Noriega brags. “It is garbage!” Irony dooms a man—a prisoner up to new era.	
		Borrow or rob?
		Murder for a jar of red rum.
		Oozy rat in a sanitary zoo.
		Yo, banana boy!
		UFO tofu?
	*/
	 
	
	//var
	string words = "hello world";
	string word = "Computer Science";
	char s[80];
	string s2 = words + words;
	
	//===================================================
	
	strcpy(s, "one");
	strcpy(s, "two");
	strcat(s, "three"); //concat
	//cout << s;
	cout << strlen(s) << endl;
	cout << word.substr(0,8);
}
