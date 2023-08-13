#include<stdio.h>
#include<math.h>
#define PI 3.1416

int main(){
	int a=0, n=100; 
	double x = a, h, b= 2*PI;
	h = (b-a)/n;
	printf("\"x\", \"sin(x)\"\n");
	for(int i=0;i<n; i++){
		printf("%lf, %lf\n", x, sin(x));
		x +=h;
	}
	x = b;
	printf("%lf, %lf\n", x, sin(x));
}
	 
