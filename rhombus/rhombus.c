#include<stdio.h>
void main()
{
  int rows;
  printf("Enter number of Rows !\n");
  scanf("%d",&rows);
  for(int row=0;row<rows;row++)
  {
    for(int pyr=0;pyr<row;pyr++)
    {
      printf(" ");
    }
    for(int star=0;star<4;star++)
    {
       printf("*");
    }
    printf("\n");
  }
}