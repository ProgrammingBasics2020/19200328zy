#include<stdio.h>
int main()
{
	char a[1000];
	int sum=0;
	int step;
	step=0;
	int b=0;
	int panduan=0;//1Ϊ���ǻ����� 
	for( ;a[step]!='\n';step++)
	{
		a[step]=getchar();
		if(a[step]=='\n')
		{
			break;
		}
	}
	sum=step;
	step--;
	if(sum%2==0)
	{
		sum=sum/2;
		for(b=0;b<sum;b++)
		{
			if(a[b]!=a[step-b])
			{
				panduan=1;
				break;
			}
		}
	}else
	{
		sum=sum/2;
		for(b=0;b<sum-1;b++)
		{
			if(a[b]!=a[step-b])
			{
				panduan=1;
				break;
			}
		}
	}
	if(panduan==0)
	{
		printf("�ǻ��Ĵ�Ŷ"); 
	}else
	{
		printf("���ǻ��Ĵ�Ŷ"); 
	}
	
	
	return 0;
} 
