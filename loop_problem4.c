/*Write a program (WAP) that will print following series upto Nth terms.
3, 6, 9, 12, 15, 18, 21, 24, 27, 30, 33, 36, 39, 42 …….*/


#include<stdio.h>

int main()
{
    int i, n, tmp = 3;
    scanf("%d", &n);

    if(n>0){

        printf("3");
        for(i=2; i<=n; i++){
            tmp += 3;
            printf(", %d", tmp);
        }
    }

    return 0;
}
