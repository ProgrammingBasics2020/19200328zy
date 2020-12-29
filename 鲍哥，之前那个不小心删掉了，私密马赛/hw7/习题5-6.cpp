#include<stdio.h>
int f(int n);
int main()
{
	int i;
	for(i=1;i<=5;i++)
		printf("f(%d)=%d\n",i,f(i));
	return 0;
}
int f(int n)
{
	int s=0,i;
	if(n==0||n==1)
	return 1;
	for(i=n-1;i>=0;i--)
		s += f(i)* f(n-1-i);
	return s;
}
