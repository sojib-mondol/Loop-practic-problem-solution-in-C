
/*Write a program (WAP) that will give the sum of first Nth terms for the following series.
1, -2, 3, -4, 5, -6, 7, -8, 9, -10, 11, -12, 13, -14, …….*/

#include<stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);

    if(n>0){
        if(n%2 == 0) printf("Result: -%d\n", n/2);
        if(n%2 != 0) printf("Result: %d\n", (n/2)+1);
    }

    return 0;
}
