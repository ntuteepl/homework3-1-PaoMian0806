#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* s1 d1 s2 d2 s3 d3
    s1 d1 s3 d3 s2 d2
    s2 d2 s1 d1 s3 d3
    s2 d2 s3 d3 s1 d1
    s3 d3 s1 d1 s2 d2
    s3 d3 s2 d2 s1 d1 */

    int s1,d1,s2,d2,s3,d3,car;
    scanf("%d%d%d%d%d%d",&s1,&d1,&s2,&d2,&s3,&d3);

    if (d1 <= s2){
        if (d2 <= s3){
            car = 1;
        }
        else {
            car = 2;
        }
    }
    else if (d1 <= s3){
        if (d3 <= s2){
            car = 1;
        }
        else {
            car = 2;
        }
    }
    else if (d2 <= s1){
        if (d1 <= s3){
            car = 1;
        }
        else {
            car = 2;
        }
    }
    else if (d2 <= s3){
        if (d3 <= s1){
            car = 1;
        }
        else {
            car = 2;
        }
    }
    else if (d3 <= s1){
        if (d1 <= s2){
            car = 1;
        }
        else {
            car = 2;
        }
    }
    else if (d3 <= s2){
        if (d2 <= s1){
            car = 1;
        }
        else {
            car = 2;
        }
    }
    else {
        car = 3;
    }
    printf("%d",car);

    return 0;
}
