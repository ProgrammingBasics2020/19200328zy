#include<stdio.h>
int fib(int n,int a,int b);
int main()
{
	printf("Fib(5)=%d\n",fib(5,1,1));
	
	return 0; 
}

int fib(int n, int a,int b)
{
	if(n<=2)
	{
		return b;
	}
	return fib(n-1,b,a+b);
}
 
