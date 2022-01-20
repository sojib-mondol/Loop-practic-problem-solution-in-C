/*Write a program (WAP) that will print following series upto Nth terms.
1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, 169, …….*/

#include<stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);

    if(n>0){

       printf("1");
       for(i = 2; i <= n; i++){
            printf(", %d ", i*i);
       }

    }
}
