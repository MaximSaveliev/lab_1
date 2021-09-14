#include <iso646.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float a = 0, b = 0, c = 0, xs = 0, xe = 0, delta = 0, y = 0;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &xs);
    scanf("%f", &xe);
    scanf("%f", &delta);

    
    while(xs <= xe){
        
        if (xs < 0 && b != 0)
        {
            y=a*(xs+c)*(xs+c)-b;
        } else if (c == 0.0f)
        {
            printf("0.00 0.00");
            break;
        } else if ((xs > 0) && (b == 0))
        {
            y=(xs-a)/c;
        } else
        {
            y=a+xs/c;
        }
        
        printf("%.2f ", y);
        xs += delta;
    }

    return 0;
}