#include<stdio.h>
int main()
{
   char a[100];
   int i=0;
   int sum=1;
   char zhong;
   a[0]=getchar(); 
   for(i=1;a[i]!='\n';i++)
   {	
   		a[i]=getchar();
		   if(a[i]=='\n')
		   {
		   	break;
		   } 
		sum++;
   }
   for(i=0;i<=(sum-1)/2;i++)
   {
   	zhong=a[i];
   		a[i]=a[sum-1-i];
   	a[sum-1-i]=zhong;

   }
   for(i=0;i<sum;i++)
   {	
   		printf("%c",a[i]);
   }
	return 0;
}
