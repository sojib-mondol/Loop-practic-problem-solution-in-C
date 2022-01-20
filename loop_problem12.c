/* Write a program (WAP) that will print Fibonacci series upto Nth terms.
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ……. */

#include<stdio.h>

int main(){
    int i, n, a = 0, b = 1, c;
    scanf("%d", &n);

    if(n>0)
    {
        printf("%d", b);
        for(i = 2; i <= n; i ++)
        {
            c = a + b;
            printf(", %d", c);
            a = b;
            b = c;
        }
    }

    return 0;
}
