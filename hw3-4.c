#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1,b1,c1,d1,a2,b2,c2,d2;
    int ans,guess;
    int correct = 0,incorrect = 0,stop = 0;
    scanf("%d",&ans);

    a1 = ans / 1000;
    b1 = (ans % 1000) / 100;
    c1 = (ans % 100) / 10;
    d1 = ans % 10;

    while (stop == 0){
        scanf("%d",&guess);
        if (guess != 0){
            a2 = guess / 1000;
            b2 = (guess % 1000) / 100;
            c2 = (guess % 100) / 10;
            d2 = guess % 10;
    
            if (a2 != a1 && ((a2 == b1)||(a2 == c1)||(a2 == d1))){
                incorrect += 1;
            }
            else if (a2 == a1){
                correct += 1;
            }
            if (b2 != b1 && ((b2 == a1)||(b2 == c1)||(b2 == d1))){
                incorrect += 1;
            }
            else if (b2 == b1){
                correct += 1;
            }
            if (c2 != c1 && ((c2 == a1)||(c2 == b1)||(c2 == d1))){
                incorrect += 1;
            }
            else if (c2 == c1){
                correct += 1;
            }
            if (d2 != d1 && ((d2 == a1)||(d2 == b1)||(d2 == c1))){
                incorrect += 1;
            }
            else if (d2 == d1){
                correct += 1;
            }
    
            printf("%dA%dB\n",correct,incorrect);
        
            correct = 0;
            incorrect = 0;
        }
        else {
            stop = 1;
        }
    }
    return 0;
}
