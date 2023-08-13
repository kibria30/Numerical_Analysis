#include<stdio.h>
#define MAX 100
#define f(x)  ((x)*(x)+1)

int main(){
    int n = 10, i;
    double a = 0, b=2, h, x[MAX], fx[MAX], Sum_X = 0, Sum_O = 0, Sum_E = 0;
    
    h = (b-a)/n;

    x[0] = a;
    for(i = 1; i<n; i++){
        x[i] = x[i-1] + h;
    }
    x[i] = b;

    for(i=0; i<=n; i++){
        fx[i] = f(x[i]);
    }
	
    Sum_X = fx[0] + fx[n];

    for(i=1; i<n; i++){
        if(i%2 ==0) Sum_E += fx[i];
        else Sum_O += fx[i];
    }

    printf("Simpson's result: %lf\n", h*( Sum_X + 4*Sum_O + 2*Sum_E )/3 );

    printf("trapezoidal result: %lf\n", h*(Sum_X + 2*(Sum_O + Sum_E))/2 );
}
