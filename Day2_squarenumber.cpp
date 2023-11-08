#include<stdio.h>
int main()
{
	  int number,i,square;
	  printf("numbers of square number:\n");
	  scanf("%d",&number);
	  for(i=1;i<=number;i++)
	  {
	  	square=i*i;
	  	printf("square of %d:%d\n",i,square);
	  }
}
