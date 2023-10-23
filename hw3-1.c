#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=0;
    scanf("%d",&a);
    if (a == 1){
        printf("NO");
    }
    else if (a == 2){
        printf("YES");
    }
    else{
        for (int i = a-1; i > 1; i--){
            if (a%i == 0){
                b = 1;
                printf("NO");
                break;
            }
        }
        if (b == 0){
            printf("YES");
        }
    }
    return 0;
}
