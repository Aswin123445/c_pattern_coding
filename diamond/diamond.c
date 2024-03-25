#include<stdio.h>
void main(){
  int rows;
  int inSpace=0;
  printf("Enter number of rows of diamond must be an odd number\n");
  scanf("%d",&rows);
  int spaces=rows/2;
  for(int row=0;row<rows/2+1;row++){
    //space printing
    for(int space=0;space<spaces;space++){
      printf(" ");
    }
    if(row<rows/2+1)
      printf("*");
    if(row!=0){
      int Spa=0;
      while(Spa<=inSpace){
        printf(" ");
        Spa++;
      }    
      inSpace=inSpace+2;
      printf("*");
    }
    spaces--;
    printf("\n");
  }
  int spaceDown=(rows/2-1)*2-1;
  for(int row=0;row<rows/2;row++){
    //printing spaces
    for(int space=0;space<=row;space++){
      printf(" ");
    }
    printf("*");
    if(row!=rows/2-1){
      int counter=0;
      while(counter<spaceDown){
        printf(" ");
        counter++;
      }
      spaceDown=spaceDown-2;
      printf("*");
    }
    printf("\n");
    
  }
}