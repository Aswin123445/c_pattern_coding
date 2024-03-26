#include<stdio.h>
void main(){
  int height;
  printf("Enter the height of diamonds");
  scanf("%d",&height);
  int maxSpace=((((height*2-1)/2)-1)*2)-1;
  for(int row=0;row<(2*height-1)/2;row++){
    if(row==0){
      for(int star=0;star<height*2-1;star++){
        printf("*");
      }
    }else{
      //printing spaces
      for(int space=0;space<row;space++){
        printf(" ");
      }
      printf("*");
      for(int innerSpace=    0;innerSpace<maxSpace;innerSpace++){
        printf(" ");
      }
      maxSpace-=2;
      printf("*");
    }
    printf("\n");
  }
  int maxDownSpace=height-1;
  int innerMaxSpace=1;
  for(int row=0;row<height;row++){
    if(row==height-1){
      for(int star=0;star<height*2-1;star++){
        printf("*");
      }
    }else{
      //printing spaces
      for(int space=0;space<maxDownSpace;space++){
        printf(" ");
      }
      printf("*");
      //printing innerspace
      int innerSpace=0;
      if(row!=0){
        while(innerSpace<innerMaxSpace){
          printf(" ");
          innerSpace++;
        }
        printf("*");
        innerMaxSpace+=2;
      }
      maxDownSpace--;
    }
    printf("\n");
  }
}