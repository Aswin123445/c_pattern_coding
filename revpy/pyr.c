#include<stdio.h>
void main()
{
  printf("Enter the number of Rows");
  int rows;
  scanf("%d",&rows);
  int spa=rows-1;
  for(int row=0;row<rows;row++)
  {
     for(int space=0;space<spa;space++)
     {
       printf(" ");
     }
     spa--;
     for(int star=0;star<=row;star++)
     { 
       printf("*");
     }
     printf("\n");
  }
}