#include<stdio.h>
void main(){
  int rows;
  int count=1;
  printf("enter number of rows\n");
  scanf("%d",&rows);
  for(int row=0;row<rows;row++){
    for(int number=0;number<=row;number++){
      printf("%d ",count);
      count++;
    }
    printf("\n");
  }
}