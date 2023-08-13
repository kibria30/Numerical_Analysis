#include<stdio.h>
#include<math.h>
#define EPS 10.0e-6
#define MAX 100
#define h(x) (sqrt(x) - (x)*(x))

double bisection(double a, double b){
	int i, n =100;
	double c;
	if(h(a)*h(b) > 0){
        	printf("Exit\n");
    	} 
	for(i = 1; i<n; i++){
		c = (a+b)/2;

		if(fabs(h(c))<EPS){
			return c;
		}
		if(h(a)*h(c)<0){
			b = c;
		}
		else a = c;
	}
}


void simpson(double a, double b){
    int n = 20, i;
    double h, x[MAX], fx[MAX], Sum_X = 0, Sum_O = 0, Sum_E = 0;

    h = (b-a)/n;
    x[0] = a;
    for(i = 1; i<n; i++){
        x[i] = x[i-1] + h;
    }
    x[i] = b;

    for(i=0; i<=n; i++){
        fx[i] = h(x[i]);
    }
	
    Sum_X = fx[0] + fx[n];
    for(i=1; i<n; i++){
        if(i%2 ==0) Sum_E += fx[i];
        else Sum_O += fx[i];
    }
    printf("Simpson's result: %lf\n", h*( Sum_X + 4*Sum_O + 2*Sum_E )/3 );

    printf("trapezoidal result: %lf\n", h*(Sum_X + 2*(Sum_O + Sum_E))/2 );
}

int main(){
    double a = 0;
    double b = bisection(0.5, 1.25);
    simpson(a,b);
}
