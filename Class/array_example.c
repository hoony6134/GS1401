/*
Author: Brian J. d'Auriol. date: 2020.06.11
        Updated                  2022.02.03
 Purpose: 2D array heap allocations

 Copyright release. Students who have received this source code 
 from Brian J. d'Auriol may freely use the source code without 
 restriction (attribution is welcomed but not necessary). The 
 souce code is as-is; and while I have attempted to use best 
 practices, it is nevertheless a teaching example: therefore 
 reviewing the code prior to using it is recommended.
 
 No copyrights are released to others whom have not received the 
 source file from Brian J. d'Auriol.

*/

#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 4

/*
 The operating system passes command line parameters to main, 
 argc is the number of parameters, argv is an array of strings, 
 each string is a parameter, argv[0] is the name of the program,
 argv[1] is the first parameter, argv[2] is the second, etc.
*/

int main(int argc, char** argv)
{
int   i,j,k;
int   row1   = 4;
int   col1[] = {3, 4, 5, 4};
int** array1; 
int** array2;
int*  array3;
int   array4[ROW][COL];

//----------------------------------------------------
//1. non-contiguous array, variable length Rows. Can use run-time
//   variables for array size.

   // pointer array
   if (NULL == (array1 = (int**) malloc (row1 * sizeof(int*)))) {
      fprintf(stderr,"%s","malloc allocation error, aborting\n");
      exit(1);
   }

   // data array
   for (i=0; i<row1; i++) {
      if (NULL == (array1[i] = (int*) malloc (col1[i] * sizeof(int)))) {
         fprintf(stderr,"%s","malloc allocation error, aborting\n");
         exit(1);
      }
   }

   // Initialization
   k=0;
   for (i=0; i<row1; i++) {
      for (j=0; j<col1[i]; j++) {
         array1[i][j] = k++;
      }
      // Comparison with compiler allocated. The same indexing 
      // is used for both. The compiler can determine which is
      // which and translate to the correct pointer indexing.
      array4[i][0] = i; 
   }

   // printout check
   printf("non-contiguous array example\n");
   for (i=0; i<row1; i++) {
      for (j=0; j<col1[i]; j++) {
         printf("%d ", array1[i][j]);
      }
      printf("\n");
   }
	   
   // free allocations (deallocate) after use, in reverse order.
   for (i=0; i<row1; i++) {
      free(array1[i]);
   }
   free(array1);


//----------------------------------------------------
//2. contiguous array, all rows have same fixed length, thus can 
//   use compile-time constants (as shown here) or run-time variables.
       
   // pointer array
   if (NULL == (array2 = (int**) malloc (ROW * sizeof(int*)))) {
      fprintf(stderr,"%s","malloc allocation error, aborting\n");
      exit(1);
   }

   // data array allocation
   if (NULL == (array2[0] = (int*) malloc (ROW*COL * sizeof(int)))) {
      fprintf(stderr,"%s","malloc allocation error, aborting\n");
      exit(1);
   }

   // calculate and store the starting addresses of each row
   for (i=1; i<ROW; i++)
      array2[i] = array2[0] + i * COL;

   // Initialization
   for (i=0; i<ROW; i++) {
      for (j=0; j<COL; j++) {
         array2[i][j] = i*COL + j; // conversion 2D to 1D index value
      }
   }

   // printout check
   printf("contiguous array example\n");
   for (i=0; i<ROW; i++) {
      for (j=0; j<COL; j++) {
         printf("%d ", array2[i][j]);
      }
      printf("\n");
   }
	   
   // free allocations (deallocate) after use, in reverse order.
   free(array2[0]);
   free(array2);
	

//3. using a 1D array but indexing using 2D array calculations, contiguous array, all rows have same fixed length

   // data array allocation
   if (NULL == (array3 = (int*) malloc (ROW*COL * sizeof(int)))) {
      fprintf(stderr,"%s","malloc allocation error, aborting\n");
      exit(1);
   }
	
   // Initialization
   for (i=0; i<ROW; i++) {
      for (j=0; j<COL; j++) {
          // must convert from 2D to 1D index for every array access.
          array3[i*COL + j] = i*COL + j;   
      }
   }

   // printout check
   printf("contiguous 1D array example\n");
   for (i=0; i<ROW; i++) {
      for (j=0; j<COL; j++) {
          printf("%d ", array3[i*COL + j]);
      }
      printf("\n");
   }
  
   // free allocations (deallocate) after use
   free(array3);
}