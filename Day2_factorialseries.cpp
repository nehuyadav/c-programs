#include<stdio.h>
int main()
{
	int i,j,fact,n;
	printf("enter a number \n");
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		fact=1;
	   for(i=j;i>=1;i--)
		  {
		  fact*=i;
          }
	printf("factorial %d:%d\n",j,fact);
    }
}
