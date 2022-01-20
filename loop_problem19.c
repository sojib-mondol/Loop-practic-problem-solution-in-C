// WAP that will print (as an integer) the reverse of a given integer number N.
#include<stdio.h>
int main()
{
    int i, n, rem, rev = 0;
    scanf("%d", &n);

    while(n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    printf("%d\n", rev);
    return 0;
}
