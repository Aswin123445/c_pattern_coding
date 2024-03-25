#include<stdio.h>
void main(){
	printf("Enter height of triangle");
	int height;
	scanf("%d",&height);
	int arr[10]={1,3,5,7,9,11,13,15,17,19};
	int sRows=height-2;
	int spaces=arr[sRows-1];

	for(int outIndex=0;outIndex<height;outIndex++){
		if(outIndex==0){
 			for(int stars=1; stars<(2*height-1);stars++){
				printf("*");
			}	
		}
		for(int spaceIndex=0;spaceIndex<outIndex;spaceIndex++){
			printf(" ");
		}
	        printf("*");
		if(outIndex!=0&&outIndex!=height-1){
		      for(int spaceIndex=0;spaceIndex<spaces;spaceIndex++){
				printf(" ");
		      }
		      spaces=spaces-2;
		}
	       if(outIndex!=0&&outIndex!=height-1){
		printf("*");
	       }

		printf("\n");
	}
}
                
