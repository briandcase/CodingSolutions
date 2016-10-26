You have to complete the function void update(int *a,int *b), which reads two integers as argument, and sets  with the sum of them, and  with the absolute difference of them.

Input Format

Input will contain two integers,  and , separated by a newline.

Output Format

You have to print the updated value of  and , on two different lines.


P.S.: Input/ouput will be automatically handled. You only have to complete the void update(int *a,int *b) function.

#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function  
    int c = *b;
    int d = *a;
    d = *a + *b;
    *b = *a - c;
    if ( *b < 0 )
      {
        *b = *b * -1;      
      }
    *a = d;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
