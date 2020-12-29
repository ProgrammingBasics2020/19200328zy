#include<stdio.h>
int  is_pow2(int n)
{
	int step=0;
	for( ;n>=2;n/=2)
	{
		if(n%2==1)
		{
			step=-1;
			break;
		}
	}
	
	return step; 
}
int main()
{
	int a;
	scanf("%d",&a);
	int pan;
	pan=is_pow2(a);
	
	printf("%d",pan);
	
	return 0;
}
