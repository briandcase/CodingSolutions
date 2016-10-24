/*
You are given a positive integer, ,:

If , then print the English representation of it. That is "one" for 1, "two" for 2, and so on.
Otherwise print "Greater than 9" (without quotes).
Input Format

Input will contain only one integer, .

Constraints


Output Format

Print the output as described above.

*/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   int a;
   cin >> a;
  
   if ( a == 1)
     {
       cout << "one";
     }
   else if ( a == 2)
     {
       cout << "two";
     }
   else if ( a == 3)
     {
       cout << "three";
     }
   else if ( a == 4)
     {
       cout << "four";
     }
      else if ( a == 5)
     {
       cout << "five";
     }
   else if ( a == 6)
     {
       cout << "six";
     }
   else if ( a == 7)
     {
       cout << "seven";
     }
   else if ( a == 8)
     {
       cout << "eight";
     }
   else if ( a == 9)
     {
       cout << "nine";
     }
   else 
     {
       cout << "Greater than 9" << endl;
     }
   return 0;
}
