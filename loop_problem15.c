//WAP that will determine whether a number is prime or not.

#include<stdio.h>

int main()
{
    int i, n, tmp = 0;
    scanf("%d", &n);

    if(n == 0 || n == 1) printf("%d is not a prime number\n.", n);
    else if(n>1)
    {
        for(i = 2; i <= n/2; i ++)
            if(n % i == 0)
            {
                tmp = 1;
                break;
            }
        if(tmp == 0) printf("%d is a prime number\n", n);
        else printf("%d is not a prime number\n", n);
    }

    return 0;
}
