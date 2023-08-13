#include<stdio.h>
#include<math.h>
#define PI 3.1416
#define f(x) (sin(x))

int main(){
	int a=0, n=100, i; 
	double h, b= 2*PI, x[1000], y[1000];
	x[0] =a;
	h = (b-a)/n;
	
	for(i=1; i<n; i++){
		x[i] = x[i-1] + h;
		y[i] = f(x[i]);
	}
	
	x[i] = b;
	y[i] = f(b); 
	
	printf("\"x\", \"sin(x)\", \"sin'(x)\"\n");
	printf("%lf, %lf, %lf\n", x[0], y[0], (y[1]-y[0])/(x[1]-x[0]));
	for(i=1; i<n; i++){
		printf("%lf, %lf, %lf\n", x[i], y[i], (y[i+1]-y[i-1])/(x[i+1]-x[i-1]));

	}
	
	printf("%lf, %lf, %lf\n", x[i], y[i], (y[i]-y[i-1])/(x[i]-x[i-1]));
}
	 
