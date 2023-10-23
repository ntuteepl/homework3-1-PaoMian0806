#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,a1=0,b1=0;
    scanf("%d%d",&a,&b);
    int a2=a,b2=b;
    while (a2 != 0){
        a1 += a2%10;
        a2 /= 10;
    }
    while (b2 != 0){
        b1 += b2%10;
        b2 /= 10;
    }
    if (a1 > b1){
        printf("%d",b);
    }
    else if (a1 < b1) {
        printf("%d",a);
    }
    else {
        if (a > b){
            printf("%d",b);
        }
        else {
            printf("%d",a);
        }
    }

    return 0;
}

