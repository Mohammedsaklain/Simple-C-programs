/* Usage of enum*/

#include <stdio.h>
void main(){
    enum Letter{
        a = 0,
        b,
        c,
        d,
    };
    enum Letter smallLetter;
    smallLetter = a;
    printf("%d\n",smallLetter);

}