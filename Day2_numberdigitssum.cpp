#include<stdio.h>
int main(){
	 int number,num,sum=0,re;
	 printf("enter a number");
	 scanf("%d",&number);
	 num=number;
	 while(num!=0){
	 	 re=num%10;
	 	 sum+=re;
	 	 num=num/10;
	 }
	 printf("sum:%d",sum);
}
