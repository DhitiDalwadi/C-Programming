#include<stdio.h>
int main()
{

	int num=5;
	int total=0;
	for(int i=1;i<=num;i++)
	
	{
		if(i% 2==0)
		{
			printf("-%d",i);
			total-=i;
		}
		else
		{
			if (i!=1)
			printf("+%d",i);
			total+=i;
		}
	}
	printf("=%d\n",total);
	return 0;
}
