#include<stdio.h>
void main(){ 
  int rows;
  int stars=1;
  printf("Enter number of rows you want!");
  scanf("%d",&rows);
  int count=rows-1;
  for(int row=0;row<rows;row++){
    int checker=row+1;
    for(int space=0;space<count;space++){
      printf(" ");
    }
    count--;
    printf("*");
    int count=0;
    while(count<stars){  
      printf(" ");
      count++;
    }
    stars=2*checker-1;
    if(row>0){
    printf("*");
   }
    printf("\n");
  }
}