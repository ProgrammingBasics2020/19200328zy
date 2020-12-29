#include<stdio.h>
int count1_in_bin(int n)
{
	int a[40];
	int step=0;
	int sum;
	for(step=0;n>0;n/=2)
	{
		a[step]=n%2;
		if(a[step]==1)
		{
			sum++;
		}
	}
	return sum;
}
int main()
{
	int shu;
	scanf("%d",&shu);
	int x;
	x=count1_in_bin(shu);
	printf("%d",x
	);
	
	return 0;
	
}
