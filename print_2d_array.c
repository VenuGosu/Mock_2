#include<stdio.h>
extern int l;

void print_2d_array(int arr1[][l], int arr2[][l])
{
	int a=0,b=0;
	printf("Printing l value in printing array file =%d \n",l);
	
	for(a=0;a<3;a++)
        {
		for(b=0;b<3;b++)
		{	
   			printf(" %d", (*(*(arr1+a)+b)));
   		}
   		printf("\n");
   	}
   	
   	printf("\n");
       for(a=0;a<3;a++)
        {
		for(b=0;b<3;b++)
		{	
   			printf(" %d", (*(*(arr2+a)+b)));
   		}
   		printf("\n");
   	}
 }
