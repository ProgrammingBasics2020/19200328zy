#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d",&a);
	b=a%10;
	c=a/10%10;
	d=a/100;
	a=b*100+c*10+d;
	printf("%d",a);
	
	return 0;
} 
