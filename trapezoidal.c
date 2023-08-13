#include<stdio.h>
#define MAX 100
#define f(x)  ((x)*(x)+1)

int main(){
    int n = 10, i;
    double a = 0, b=2, h, x[MAX], fx[MAX], Sum_X = 0, Sum_I = 0;
    
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
	
    for(i = 1; i<n; i++){
        Sum_I += fx[i];
    }


    double integral_value = h*(Sum_X + 2*Sum_I)/2;
    printf("trapezoidal result: %lf\n", integral_value );
}
