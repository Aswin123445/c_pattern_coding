#include<stdio.h>
int main(){
  int rows;
  printf("Enter the number of rows");
  scanf("%d",&rows);
  if(rows%2==0){ 
    printf("must have a odd number");
    return 0;
  }
  else{
    int topSpace=rows-2;
    int Uspace=rows/2;
    int Dspace=Uspace-1;
    int dspace=1;
    for(int row=0;row<rows;row++){
      if(row<Uspace+1){
        for(int Upspace=0;Upspace<row;Upspace++){
           printf(" ");
        }
      }
      else{
        for(int Dwspace=0;Dwspace<Dspace;Dwspace++){
          printf(" ");
        }
        Dspace--;
      }
      printf("*");
      if(row<Uspace){
        for(int tSpace=0;tSpace<topSpace;tSpace++){
          printf(" ");
        }
        topSpace=topSpace-2;
        printf("*");
      }
      if(row>Uspace){
        int Dospace=dspace*2-1;
        for(int spa=0;spa<Dospace;spa++){
          printf(" ");
        }
        dspace++;
        printf("*");
      }
      printf("\n");
    }
  }
}