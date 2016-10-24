/*
You have to write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

Input Format

Input will contain four integers -  , one in each line.

Output Format

Print the greatest of the four integers. 
PS: I/O will be automatically handled.
*/


#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
  {
    int biggest_number;
    
         if (a > b && a > c && a > d) {
           biggest_number = a;
         }
         else if( b > a && b > c && b > d) {
           biggest_number = b;
         }
         else if( c > a && c > b && c > d) {
           biggest_number = c;
         }
         else {
           biggest_number = d;
         }
    return biggest_number;
  }

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
