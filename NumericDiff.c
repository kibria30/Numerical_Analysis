#include<stdio.h>
#include<math.h>
#define f(x) ((x)*(x) + 1)

int main(){
	int n=10, i;
	double a =0, b=2, x[1000], y[1000], h;
	//scanf("%lf %lf %d", a, b, n);
	
	x[0] = a;
	y[0] = f(x[0]);
	h =  (b-a)/n;
	for(i=1; i<n; i++){
		x[i] = x[i-1] + h;
		y[i] = f(x[i]);
	}
	
	x[i] = b;
	y[i] = f(b); 
	printf("\"x\"\t\"f(x)\"\t\"f'(x)\"\n");
	printf("%lf %lf %lf\n", x[0], y[0], (y[1]-y[0])/(x[1]-x[0]));
	for(i=1; i<n; i++){
		printf("%lf %lf %lf\n", x[i], y[i], (y[i+1]-y[i-1])/(x[i+1]-x[i-1]));
	
	}
	
	printf("%lf %lf %lf\n", x[i], y[i], (y[i-1]-y[i])/(x[i-1]-x[i]));
	
	
}	 
