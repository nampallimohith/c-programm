#include<stdio.h>
int main()
{
	int num,digit;
	printf("enter a number");
	scanf("%d",&num);
	while(num)
	{
		digit=num%10;
		printf("%d",digit);
		num/=10;
	}
}
