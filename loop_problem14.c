// Write a program (WAP) that will find xy (x to the power y) where x, y are positive integers.
#include<stdio.h>

int main()
{
    int a, b, i, tmp = 1;
    scanf("%d %d", &a, &b);

    for(i = 1; i <= b; i ++) tmp *= a;
    printf("%d", tmp);

    return 0;

}
