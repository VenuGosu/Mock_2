#include<stdio.h>
#include"header.h"
#define ROW 3
#define COL 3
extern int l;
void swap(int mat[][l])
{
	int i=0,j=0,tmp=0,k=0,a=0,n=3;
	printf("\n");
	
	printf("normal Matrix:\n");
        for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                        printf("%d ", (*(*(mat+i)+j)));
                }
                printf("\n");
        }

	
	
	for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                        tmp = mat[i][j];
                        a = j + 1;
                        for (k = i; k < n; k++) {
                                while (a < n) {
                                        /* swapping the data */
                                        if (tmp < mat[k][a]) {
                                                tmp = mat[k][a];
                                                mat[k][a] = mat[i][j];
                                                mat[i][j] = tmp;
                                        }
                                        a++;
                                }
                                a = 0;
                        }
                }
        }

        /* print the result */
        printf("\n");
        printf("Resultant Matrix:\n");
        for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                        printf("%d ", (*(*(mat+i)+j)));
                }
                printf("\n");
        }

  }
