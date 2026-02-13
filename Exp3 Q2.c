#include<stdio.h>
struct date
{
	int date;
	char month[30];
	int year;
	
};
main()
{
	struct date d1;
	printf("Enter date details");
	scanf("%d %s %d",&d1.date,&d1.month,&d1.year);
	printf("%d/%s/%d",d1.date,d1.month,d1.year);
	
}
