/*
Courtney Ng
Period 4 
Program Desc: "Random" Numbers
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
   int a = 41597, b = 21163, m = 10000;
   int x0 = time(0), x;

   x = (a * x0 + b) % m;
   for (int i = 0; i<100; i++) {
       x = (a * x + b) % m;
       cout << x <<endl;
       while(true){
       	cout << time(0) << endl;
       }
   }
}

