
/*Write a program (WAP) that will give the sum of first Nth terms for the following series.
1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, 169, …….*/

#include<stdio.h>

int main()
{
    int i, n, tmp = 0, sum = 0;
    scanf("%d", &n);

    if(n>0)
    {
        for(i = 1; i <= n; i ++){
            tmp = i*i;
            sum = sum + tmp;
        }
        printf("Result: %d", sum);
    }

    return 0;
}

