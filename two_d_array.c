#include<stdio.h>
#include"header.h"
int l=3;


int main()
{
   int arr1[3][3]={{1,2,3},{4,5,6},{6,7,8}},arr2[3][3]={{1,2,3},{4,5,6},{6,7,8}};
   //int *ptr_of_one_d;
   print_2d_array(arr1,arr2);
   multiply(arr1,arr2);
   //insertion(&ptr_of_one_d);
   
   return 0;
   

}

