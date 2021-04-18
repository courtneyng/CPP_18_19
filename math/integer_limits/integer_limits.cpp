/*
Courtney Ng
Period 4
Program Description: HW Integer_Limits
*/

#include <limits.h>
#include <unistd.h>
#include <iostream>
using namespace std;

int main(){
	cout << "Check the upper and lower limits of integer: \n--------------------------------------------------\n" << endl;
	cout << "The maximum limit of int data type: "; cout << (INT_MAX)<< endl; 
	cout << "The minimum limit of int data type: "; cout << (INT_MIN) << endl;
	cout << "The maximum limit of unsigned int data type: "; cout << (UINT_MAX) << endl;
	
	cout << "" << endl;
	
	cout << "The minimum limit of long long data type: "; cout << (LLONG_MIN) << endl;
	cout << "The minimum limit of long long data type: "; cout << (LLONG_MAX) << endl;
	cout << "The maximum limit of unsigned long long data type: "; cout << (ULLONG_MAX) << endl;
	
	cout << "" << endl;
	
	cout << "The  Bits contain in char data type: "; cout << (CHAR_BIT) << endl;
	
	cout << "" << endl;
	
	cout << "The maximum limit of char data type: "; cout << (CHAR_MAX) << endl;
	cout << "The minimum limit of char data type: "; cout << (CHAR_MIN) << endl; 
	cout << "The maximum limit of unsigned char data type: "; cout << (UCHAR_MAX) <<endl;
	
	cout << "" << endl;
	
	cout << "The minimum limit of short data type: "; cout << (SHRT_MIN) << endl;
	cout << "The maximum limit of short data type: "; cout << (SHRT_MAX) << endl;
	cout << "The maximum limit of unsigned short data type: "; cout << (USHRT_MAX)<< endl;
}
