#include<stdio.h>
void main(){  
  int rows;
  printf("Enter number of rows you want!\n");
  scanf("%d",&rows);
  for(int row=0;row<rows;row++){
    if(row==0||row==rows-1){
      for(int star=0;star<rows;star++){
        printf("* ");
      }
    }
    else{
      for(int star=0;star<rows;star++){    
        if(star==0||star==rows-1){ 
          printf("* ");
        }
        else{
          printf("  ");
        }
      }
    }
    printf("\n");
  }
}