#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define EPS 10.0e-6
#define F(x) ((x)*(x)*(x) + 4*(x)*(x) -10)
#define g(x) sqrt(((10-4*(x)*(x))/((x)*(x)))/4)

int main(){
	int n=100, i;
	double a = 1.25, b =1.5;
	if(F(a)*F(b) > 0) exit(0);
	printf("Iter\ta\tb\tF(a)\tF(b)\tF(c)\n");
	printf("-------------------------------------------------------\n");
	for(i = 1; i<n; i++){
		b = g(a);
		printf("%d  %lf %lf %lf %lf\n", i, a,b, F(a), F(b));

		if(fabs(F(b))<EPS){
			printf("Root = %lf\n", b);
			exit(0);
		}
		else a = b;
	}
}

