#include<stdio.h>
int main()
{
	int x,y;
	int a,b;
	int yu,zhong;
	scanf("%d %d",&x,&y);
	a=x,b=y;
	for( ;1>0; )
	{
		if(a<b)
		{
			zhong=a;
			a=b;
			b=zhong;
		}
		yu=a%b;
		if(yu==0)
		{
			break;
		}
		a=yu;
	}
	printf("%d",b);
	int bei;
	bei=x*y/b;
	printf(" %d",bei);
	return 0;
}
