/* Array of structures */
#include<stdio.h>
#define size 2
struct student
{
	char name[30];
	int roll;
	float marks;
};
main()
{
	struct student s[size];
	int i;
	printf("Enter the details of students:");
	for(i=0;i<size;i++)
	{
		gets(s[i].name);
		scanf( "%d %f",&s[i].roll,&s[i].marks);
		fflush(stdin);
	}
	for(i=0;i<size;i++)
	{
		printf("\n Record no:%d\t Name:%s\t Roll no:%d\t Marks:%f",i,s[i].name,s[i].roll,s[i].marks);
	}
}
