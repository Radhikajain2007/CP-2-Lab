/* structure to store details of book. store and print the details of books using pointers */
#include<stdio.h>
struct book
{
	char name[30];
	char author[50];
	float price;
	
};
main()
{
	struct book b[2];
	struct book *p=b;
	int i;
	for(i=0;i<2;i++)
	{
		printf("Enter the details of book:\n");
		printf("Name:");
		gets((p+i)->name);
		printf("\nAuthor:");
		gets((p+i)->author);
		printf("\nPrice:");
		scanf("%f",&(p+i)->price);
		fflush(stdin);
	}
	printf("Book details:");
	for(i=0;i<2;i++)
	{
			printf("\nName:%s\t Author:%s\t Price:%f\t",(p+i)->name,(p+i)->author,(p+i)->price);
		}
	
}
