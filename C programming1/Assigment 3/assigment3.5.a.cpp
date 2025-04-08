#include<stdio.h>
int main()
{
    
	const float pi=3.14;
	float r=5;
	float h=4;
	float volume;
	volume=(pi/6)*(3*r*r+h*h)*h;
	 
	printf("the volume is : %f",volume );
	return 0;
}
