/* WAP that will count number of digits, as well as, sum up each digit for a given integer N.*/
#include<stdio.h>
int main()
{
    int n, sum, count = 0;
    scanf("%d", &n);

    for(sum = 0; n > 0; n = n/10)
    {
        sum += n % 10;
        count ++;
    }
    printf("Count: %d, Sum: %d\n", count, sum);

    return 0;

}
