/* WAP that will take N number of integers from the user and calculate sum, average and maximum of them.*/

#include<stdio.h>

int main()
{
    int i, n, t, sum = 0, max = 0, c;
    scanf("%d", &t);
    c = t;

    while(t--)
    {
        scanf("%d", &n);
        sum += n;
        if(n > max) max = n;
    }

    float avg = (float)sum / (float)c;
    printf("Sum %d\nAvg: %.3f\nMax: %d\n", sum, avg, max);

}
