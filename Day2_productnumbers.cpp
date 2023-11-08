#include<stdio.h>
int main(){
	 int i,n,product=1;
	 printf("enter a number\n ");
	 scanf("%d",&n);
	 for(i=1;i<=n;i++)
	    product*=i;
	 printf("product 1 to %d:%d",n,product);
}
