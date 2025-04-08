#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number to print its multipication table:");
	scanf("%d",&num);
	
	printf("Multipication table of %d:\n",num);
	for (int i=1;i<=10;i++)
	{
		printf("%d* %d=%d\n",num,i,num*i);
		
	}
	return 0;
}
