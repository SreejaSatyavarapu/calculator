#include <stdio.h>
double square(double x) {
	return x*x;
}
double cube(double x) {
	return x*x*x;
}

int main () {
	double x;
	double s,c;
	printf("Enter a number:");
	scanf("%lf",&x);
	s=square(x);
	c=cube(x);
	printf("square and cube of %lf are %lf and %lf",x,s,c);
	return 0;
}
