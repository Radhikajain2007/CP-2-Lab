/* Enumeration to implement a menu-driven program*/
#include<stdio.h>
enum menu { add=1,sub,exit
};
int main()
{
	int choice,a,b;
	printf("1.Add\n 2.Subtract\n 3.Exit\n");
	printf("Enter choice:");
	scanf("%d",&choice);
	if(choice==add)
	{
		printf("Enter two numbers:");
		scanf("%d %d",&a,&b);
		printf("sum=%d",a+b);
	}
	else if(choice==sub)
	{
		printf("Enter two numbers:");
		scanf("%d %d",&a,&b);
		printf("Difference=%d",a-b);
	}
	else if(choice==exit)
	{
		printf("Exit");
	}
	else
	{
		printf("Invalid choice");
	}
	return 0;
}
