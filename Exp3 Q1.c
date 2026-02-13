#include<stdio.h>
#define SIZE 1
struct student
{
	char name[30];
	int Roll;
	float marks;
	
};
main()
{
	struct student s[SIZE];
	int i;
	printf("Enter the details of students");
	for(i=0;i<SIZE;i++)
	{
		gets(s[i].name);
		scanf("%d %f",&s[i].Roll, &s[i].marks);
	
	}
	for(i=0;i<SIZE;i++)
	printf("\n Record no:%d\t Name:%s\t Roll:%d\t marks:%f",i,s[i].name,s[i].Roll,s[i].marks);
}
