#include<stdio.h>
int main()
{
  int rows;
  printf("Enter the number of rows");
  scanf("%d",&rows);
  if(rows%2==0)
  {
     printf("Must Enter a odd number of rows");
     return 0;
  }
  int topR=rows/2+1;
  int bottomR=topR-1;
  for(int row=0;row<rows;row++)
  {
    if(row<topR)
    { 
       for(int star=0;star<=row;star++)
       {
           printf("*");
       }
       printf("\n");
    }
    else
    {
       int checker=bottomR;
       while(checker!=0)
       {
          printf("*");
          checker--;
       }
       printf("\n");
       bottomR--;
    }
  }
}