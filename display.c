//passing arrays to function
#include<stdio.h>
int display(int[],int);
main()
{
      int a[]={2,6,7,9,4};
      display(a,5);
      system("pause");
}
      int display(int b[],int size)
      {
          int i;
          for(i=0;i<size;i++)
          printf("%d\t",b[i]);
      }
          
