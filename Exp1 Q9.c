#include<stdio.h>
#include<string.h>
 void main()
{
	char a[]="abc";
	char b[]="123";
	char merg[100];
	int i=0,j=0,k=0;
	while (a[i]!=0|| b[j]!=0)
	{
		if(a[i]!=0)
		{
			merg[k]=a[i];
			k++;
			i++;
		}
		if(b[j]!=0)
		{
			merg[k]=b[j];
			k++;
			j++;
		}
	}
	merg[k]=NULL;
	printf("%s",merg);
}
