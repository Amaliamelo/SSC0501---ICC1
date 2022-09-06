#include<stdio.h>
#include<math.h>

void lei_cos(float b,float c,float theta, float *a){
		*a=sqrt(pow(b,2)+pow(c,2)-2*b*c*cos(theta));
}

int main(){
	float b, c, theta, a=0;
	
	scanf("%f %f %f", &b,&c,&theta);
	
	lei_cos(b,c,theta,&a);
	
	printf("%.2f", a);
}