/*Write a program (WAP) that will print following series upto Nth terms.
1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31 …….*/

#include<stdio.h>

int main()
{
    int i, n, tmp = 1;
    scanf("%d", &n);

    if(n>0){
        printf("1");
        for(i=2; i<=n; i++){

            tmp += 2;
            printf(", %d", tmp);

        }
    }else printf("Not a valid input\n");

    return 0;
}
