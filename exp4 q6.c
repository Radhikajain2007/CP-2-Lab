#include<stdio.h>
#define size 2
struct book
{
	char title[40];
	char author[40];
	float price;
};
int main()
{
	struct book a[size];
	int i;
	printf("Enter the details of book:");
	for(i=0;i<size;i++)
	{
		gets(a[i].title);
		gets(a[i].author);
		scanf("%f",&a[i].price);
		fflush(stdin);
	}
	for(i=0;i<size;i++)
	{
		printf("\n Record no:%d\t Title:%s\t Author:%s\t Price:%f",i,a[i].title,a[i].author,a[i].price);
	}
}

