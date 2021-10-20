#include<stdio.h>
#include"header.h"
extern int l;
void multiply(int arr1[][l], int arr2[][l])
{
  int a=0,b=0,j=0,k=3,sum=0;
  int product[3][3];
  printf("Printing l value in multyfication array file =%d \n",l);
  for(a=0;a<3;a++)
  {
	for(b=0;b<3;b++)
	{	
		
	    for(j=0;j<k;j++)
	    {
		sum+= (*(*(arr1+a)+j)) * (*(*(arr2+j)+b));
	    }
	     product[a][b]=sum;
	     sum=0;   
	}
  }
  	for(a=0;a<3;a++)
        {
		for(b=0;b<3;b++)
		{	
   			printf(" %d", (*(*(product+a)+b)));
   		}
   		printf("\n");
   	}
   	swap(product);
 }


