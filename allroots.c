#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define F(x) ((x)*(x)*(x) + 4*(x)*(x) - 5)
#define EPS 10.0e-6

void main()
{
    double a,b,c;
    for(int i = 0.0; i < 6 ; i++)
    {
        a = -5.0 + i*(10.0/6);
        b = -(10.0/3) + i*(10.0/6);
        printf("%lf %lf\n",a,b);

        if(F(a)*F(b) > 0)continue;
        do
        {
            c = (a+b)/2;
            if(F(a)*F(c) < 0) b = c;
            else a = c;

        }
        while(fabs(F(c)) > EPS);
        printf("Root : %lf\n\n",c);
    }
}
