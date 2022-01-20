/*Write a program (WAP) that will print following series upto Nth terms.
1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, …….*/

#include<stdio.h>

int main()
{
    int i, n;
    scanf("%d", &n);

    if(n>0){
        printf("1");
        for(i = 2; i <= n; i++){
            if(i%2 != 0) printf(", 1");
            if(i%2 == 0) printf(", 0");
        }
    }
    return 0;
}
