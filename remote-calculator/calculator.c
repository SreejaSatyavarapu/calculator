#include <stdio.h>
double inverse(double x) {
	if(x!=0) {
		return 1/x;
	} else {
		return 0;
	}
}

int main () {
	double x,i;
	printf("Enter a number:");
	scanf("%lf",&x);
        i=inverse(x);
	printf("Inverse of %lf is %lf",x,i);
	return 0;
}

