/*
Input Format

You will be given two positive integers,  and  (), separated by a newline.

Output Format

For each integer  (so all numbers in that range):

If , then print the English representation of it. That is "one" for 1, "two" for 2, and so on.
Else if  and it is even, then print "even".
Else if  and it is odd, then print "odd".
Note:  represents the interval, i.e.,
*/


#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    int b;
    cin>>a>>b;

    for (int i = a; i <= b; i++)
        {
            if ( i >= 1 && i <= 9 )
                {
                    if ( i == 1)
                        {
                            cout << "one" << endl;
                        }
                    else if ( i == 2)
                        {
                            cout << "two" << endl;
                        }
                    else if ( i == 3)
                        {
                            cout << "three" << endl;
                        }
                    else if ( i == 4)
                        {
                            cout << "four" << endl;
                        }
                    else if ( i == 5)
                        {
                            cout << "five" << endl;
                        }
                    else if ( i == 6)
                        {
                            cout << "six" << endl;
                        }
                    else if ( i == 7)
                        {
                            cout << "seven" << endl;
                        }
                    else if ( i == 8)
                        {
                            cout << "eight" << endl;
                        }
                    else if ( i == 9)
                        {
                            cout << "nine" << endl;
                        }
                    else
                        {
                            cout << "something bad happened" << endl;
                        }
                }
             else if ( i > 9 && i % 2 == 0)
                 {
                    cout << "even" << endl;
                 }
             else if ( i > 9 && i % 2 >= 1)
                 {
                    cout << "odd" << endl;
                 }
             else
                 {
                    cout << "Some error happened." << endl;
                 }
        }
    return 0;
}
