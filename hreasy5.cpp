/*
  Reads in array and then outputs array in reverse order.
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
    int arr[a];
  
    for (int i = 0; i < a; i++)
      {
         cin >> arr[i];
      }
  
    for (int j= a-1; j >= 0; j--)
      {
        cout << arr[j] << " ";
      }
    
    return 0;
}
