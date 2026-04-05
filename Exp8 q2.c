/* structure distance to store distance in km,m,cm and find the longest distance using pointers*/
#include<stdio.h>
struct distance
{
	int km,m,cm;
};
main()
{
	struct distance d[2];
	int i,max=0;
	printf("Enter distance variables:");
	for(i=0;i<2;i++)
	{
		scanf("%d %d %d",&d[i].km,&d[i].m,&d[i].cm);
	}
	for(i=0;i<2;i++)
	{
		if(d[i].km > d[max].km)
		{
			max=i;
		}
	}
	printf("Longest distance=%dkm %dm %dcm",d[max].km,d[max].m,d[max].cm);
	
	
}
