/* Write a program (WAP) that will calculate the result for the first Nth terms of the following series.  [In that series, dot sign (.) means multiplication]
1.2 + 2.3 + 3.5 + 4.8 + 5.12 + 6.17 +…….. */

#include<stdio.h>

int main(){
    int i, n, sum = 0, b = 2;
    scanf("%d", &n);

    if(n>0){
        for(i = 1; i <= n; i++){
            sum += i*b;
            b += i;
        }
        printf("Result: %d\n", sum);
    }

    return 0;
}
