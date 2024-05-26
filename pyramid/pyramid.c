#include<stdio.h>
void main()
{
   int rows;
   printf("enter the number of rows you wanted");
   scanf("%d",&rows);
   for(int i=0;i<rows;i++)
   {
      for(int j=0;j<=i;j++)
      {
          printf("*");
      }
      printf("\n");
   }
   
}
