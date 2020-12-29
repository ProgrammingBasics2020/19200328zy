#include<stdio.h>
int factorial(int n)
{
	int a,sum=1;
	for(a=1;a<=n;a++)
	{sum=sum*a;
	}return sum;
} 
int  main()
{
	int a,step=0;
	long long int x;
	scanf("%d",&a);
	x=factorial(a);
	for( ;x>1;x=x/10)
	{
		step++;
	}
	printf("%d",step);
	return 0;
}
