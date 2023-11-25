#include<stdio.h>
int main()
{
	int a,b,choice;
	printf("enter the values:\n");
	scanf("%d%d",&a,&b);
	printf("enter the choice:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("addition of %d and %d is %d",a,b,a+b);
			break;
		case 2:
			printf("subraction of %d and %d is %d",a,b,a-b);
			break;
		case 3:
			printf("multiple of %d and %d is %d",a,b,a*b);
			break;
		case 4:
			printf("divide of %d and %d is %d",a,b,a/b);
			break;
		case 5:
			printf("module of %d and %d is %d",a,b,a%b);
			break;
		default:
			printf("invalid choice");	
	}
	return 0;
}
