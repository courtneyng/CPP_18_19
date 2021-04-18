
#include <iostream>
using namespace std;
int main(){
int W, d, mm, C, Y, x, y , z, f, g;
d = 29;
mm = 12;
C = 20;
Y = 20;

W = d + int(2.6 * mm - 0.2);
x = W - (2 * C);
y = x + Y;
z = y + int(Y/4);
f = z + int(C/4);

g= f % 7;
cout << W << endl << x << endl << y << endl << z << endl << f << endl << g;
}

/*
int main(){
	int y;
	cin >> y;
	y %= 7;
	cout << y;
}

/*

int getY(int yyyy, int mm){
	if (mm != 1 || mm!=2){			//gives year
		yyyy = yyyy % 100;
		return yyyy;
	}
	
	else{
		yyyy = yyyy % 100 - 1;
		return yyyy;
	}
	
}

int getY(int yyyy, int mm){ 		//year
	yyyy %= 100;
	if(mm == 11 || mm == 12){
		yyyy -= 1; // sub a month jan/feb
	}
	if(yyyy < 0){
		yyyy = 99; // goes from year x000 to (x-1)999
	}
	return yyyy;
}
*/



/*
// C++ program to find Find the Day 
// for a Date 
# include <iostream> 
# include <cmath> 
# include <cstring> 
using namespace std; 


int Zellercongruence(int day, int month, int year) { 

if (month == 1) { 
    month = 13; 
    year--; 
} 

if (month == 2) { 
    month = 14; 
    year--; 
} 

int q = day; 
int m = month; 
int k = year % 100; 
int j = year / 100; 
int h = q + 13*(m+1)/5 + k + k/4 + j/4 + 5*j; 
h = h % 7; 

switch (h) 
{ 
    case 0 : cout << "Saturday \n"; break; 
    case 1 : cout << "Sunday \n"; break; 
    case 2 : cout << "Monday \n"; break; 
    case 3 : cout << "Tuesday \n"; break; 
    case 4 : cout << "Wednesday \n"; break; 
    case 5 : cout << "Thursday \n"; break; 
    case 6 : cout << "Friday \n"; break; 
} 
return 0; 
} 
  
// Driver code 
int main() 
{ 
Zellercongruence(06, 04, 2002); //date (dd/mm/yyyy) 
return 0; 
} 

*/
