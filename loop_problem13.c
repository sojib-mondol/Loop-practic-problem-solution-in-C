// Write a program (WAP) that will find factorial of an integer N.

#include<stdio.h>

int main()
{
    int i, n, f = 1;
    scanf("%d", &n);

    if(n>0)
    {
        for(i = 1; i <= n; i++) f *= i;
        printf("%d", f);
    }

    return 0;
}
