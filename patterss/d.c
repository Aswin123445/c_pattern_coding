#include<stdio.h>
void main()
{
  int rows;
  printf("enter number of Rows must be an odd number !\n");
  scanf("%d",&rows);
  int firstPy=rows/2+1;
  int spa=firstPy-1;
  int secondPy=spa;
  for(int Urow=0;Urow<firstPy;Urow++)
  {
    for(int space=0;space<spa;space++)
    {
      printf(" ");
    }
    spa--;
    for(int star=0;star<(Urow+1)*2-1;star++)
    {
      printf("*");
    }
    printf("\n");
  }
  int stars=secondPy*2-1;
  for(int Drow=0;Drow<secondPy;Drow++)
  {

    for(int space=0;space<=Drow;space++)
    {
      printf(" ");
    }
    for(int star=0;star<stars;star++)
    {
      printf("*");
    }
    stars=stars-2;
    printf("\n");
  }
  
}