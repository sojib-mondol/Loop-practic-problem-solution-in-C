/* WAP that will determine whether a positive integer is Perfect number or not.
Reference: http://en.wikipedia.org/wiki/Perfect_number
#include<stdio.h> */

int main()
{
    int n,i, sum = 0;
    scanf("%d", &n);

    for(i = 1; i <= n; i ++)
    {
        if(i%2 == 0)
        {
            sum += i;
        }
    }

    int newsum = sum - n;
    if(newsum == n) printf("Yes\n");
    else printf("No\n");

    return 0;
}
