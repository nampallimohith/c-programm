#include<stdio.h>
int main()
{
	int num,r,sum=0,temp;
	
	printf("enter a number");
	scanf("%d",&num);
	for(temp=num;num!=0;num=num/10)
	{
		r=num%10;
		sum=sum+(r*r*r);
	}
	if(sum==temp)
	{
	
	printf("%d is an armstrong number.\n",temp);
}
	else
	{
	
	printf("%d is  not a armstrong number.\n",temp);
}
}
