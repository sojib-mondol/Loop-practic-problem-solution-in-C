/*Write a program (WAP) that will print following series upto Nth terms.
2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, …….*/

#include<stdio.h>

int main(){
    int i, n, tmp = 2;
    scanf("%d", &n);

    if(n>0)
    {
        printf("2");
        for(i = 2; i<=n; i++)
        {
            tmp += 2;
            printf(", %d", tmp);
        }
    }

}
