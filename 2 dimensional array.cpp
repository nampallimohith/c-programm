#include<stdio.h>
int main()
{
	int a[5][5];
	int i,j,r,c;
	
	printf("enter row and col");
	scanf("%d%d",&r,&c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		if(i==j)
		printf("%d ",a[i][j]);
		//printf("\n");
	}
}
