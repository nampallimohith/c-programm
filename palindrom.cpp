#include<stdio.h>
int main(){
	int rev,d,num,a;
	rev=0;
	d=0;
	printf("enter the number:");
	scanf("%d,&num");
	a=num;
	while(num!=0){
		d=num%10;
		rev = rev*10 + d;
		num=num/10;
}
if (rev==a){
	printf("the number is a palindrom");
}
else{
	printf ("the number is not palindrome");
}

}
	

