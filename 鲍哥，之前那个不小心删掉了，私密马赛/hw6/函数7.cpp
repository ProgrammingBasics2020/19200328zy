#include<stdio.h>
int main()
{
	int a;
	int b=2;
	scanf("%d",&a);
	if(a==1||a==2)
	{printf("a������");
	}
	else{
		for(b=2;b<a;b++)
		{
			if(a%b==0)
			{
				printf("a��������");
				break;
			}
			else
			{
				if(b>=a-1)
				{
					printf("a������");
				}
			}
		}
	}
	
	return 0;
} 
