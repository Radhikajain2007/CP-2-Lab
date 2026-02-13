#include<stdio.h>
#define SIZE 1
struct student
{
	struct address
	{
		char city[30];
		int pin;
		char district[30];
	};
	struct address add;
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
		scanf("%d %f %s %d %s",&s[i].Roll, &s[i].marks,&s[i].add.city,&s[i].add.pin,&s[i].add.district);
	
	}
	for(i=0;i<SIZE;i++)
	printf("\n Record no:%d\t Name:%s\t Roll:%d\t marks:%f city:%s\t pin:%d\t district:%s\t",i,s[i].name,s[i].Roll,s[i].marks,s[i].add.city,s[i].add.pin,s[i].add.district);
}
