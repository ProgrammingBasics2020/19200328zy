#include<stdio.h>
int is_prime(int n)
{
	int x,b=2;
	if(n==1||n==2)
	{x=1;
	}
	else{
		for(b=2;b<n;b++)
		{
			if(n%b==0)
			{
				x=0;
				//n不是素数 
				break;
			}
			else
			{
				if(b>=n-1)
				{
					x=1;
					//n是素数 
				}
			}
		}
	}
	
	return x;
}

int main()
{
	int step=0;
	int a,m;
	for(a=2;step<1000;a++)
	{
		if(is_prime(a)==1)
		{
			step++;
		}
		if(step>=100)
		{printf("%d ",a);
		m++;
		}
		if(m%10==0&&m>1)
		{printf("\n");
		}
	}
	return 0;
}
