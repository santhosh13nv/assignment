#include<stdio.h>
int main()
{
	int n1,n2,sum;
	printf("enter the number");
	scanf("%d %d",&n1,&n2);
	sum=n1+n2;
		printf("  input 1 :%d",& n1);
	printf(" \n  input 2:%d",& n2);
	printf("\n output : %d",sum);
	return 0;
}
