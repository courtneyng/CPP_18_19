/*
	else if (d > 28 && mm == 2){ // if the day is more than 28 on february
		cout << "not a valid date";
	}
	
	
		else if{ // leap
		if(mm == 2 && d == 29){			//if february and above 28 days
			if(yyyy % 4 == 0){
				if(yyyy % 100 == 0){
					if(yyyy % 400 == 0){
						
					}
					else{
						cout << "not a valid date";
					}
				}
				else{
					cout << "not a valid date";
				}
			}
			else{
				cout << "not a valid date";
			}
		}
	}
	*/
	
	//Easy C++ program to check for leap year
#include <iostream>
using namespace std;

int main ()
{
	/*
   int year;

   cout << "Enter a year you want to check: ";
   cin >> year;

   //leap year condition
   if (year % 4 == 0)
   {
      if (year % 100 == 0)
      {
         if(year % 400 == 0)
            cout << year << " is a leap year." << endl;
         else
            cout << year << " is not a leap year." << endl;
      }
      else
         cout << year << " is a leap year." << endl;
   }
   else
      cout << year << " is not a leap year." << endl;

   return 0;
   */
   cout << 2000 % 2;
}
