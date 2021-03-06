#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include "all.h"

void main()//this function is responsible for populating the structure by reading the file
{
   FILE *fp;//definig a file pointer
   long int arr[450000];
   int counter=0;
   char  line[64];
   fp=fopen("450k.txt","r");//opening the file in read mode as we are only accessing information

   while(fgets(line,64,fp) !=NULL) //accessing the lines one by one and trying to recognize the end of a line
   {
       if(line != NULL)
       {
            arr[counter]=atol(line);
            counter=counter+1;
       }
   }

   fclose(fp);

 clock_t t; 
    t = clock();

long long int iterations = BubbleSort(arr,450000);

if (1 == isSorted(arr, 450000))
  {
    t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 

    for(long int k=0;k<450000;k++)
    {
        printf("%ld\n",arr[k]);
    }   
  
    printf("took %f seconds to execute \n", time_taken); 

    printf("The number of comparisons=%llu\n",iterations);
  }

  else
    printf("FAILED test of bubbleSort()\n");

}