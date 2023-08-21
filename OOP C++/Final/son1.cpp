#include<stdio.h>
#include<math.h>
int main(){
	double x;
	scanf("%lf",&x);
	printf("%lf",cos(3*sqrt(pow(2,x)+3.14159))+pow((2*pow(x,3)+x+1),0.2)/(log(pow(3,x*x)+2.14*(log(exp(x+1.23))/log(exp(1))))/log(7)));
	return 0;
}
