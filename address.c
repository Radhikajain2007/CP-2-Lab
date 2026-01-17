//function to find the address of the array
#include<stdio.h>
int array(int[],int);
main()
{
     int a[]={2,12,1,5};
     array(a,4);
     system("pause");
}
int array(int b[],int size)
{
    int i;
    for(i=0;i<size;i++)
    printf("%u\n",&b[i]);
}

     
