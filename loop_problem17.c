// WAP that will find all the factors of a given integer N.

#include<stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);

    if(n>0)
    {
        for(i = 1; i <= n; i ++)
            if(n%i == 0) printf("%d ", i);
    }

    return 0;
}
