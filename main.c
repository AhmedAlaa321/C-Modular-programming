#include <stdio.h>
#include <stdlib.h>
#include "headers.h"
//#define FIBONACCI
//#define PROBLEM4
#define PROBLEM8
//#define problem17
//#define BUBBLESORT
//#define SELECTIONSORT

#define SIZE 3

int main()
{

     #ifdef PROBLEM4
     int operation,num1,num2,result;
     while(1)
     {
         printf("\n operation = ");
         scanf("%c",&operation);
         printf("\n num1 = ");
         scanf("%d",&num1);
         printf("\n num2 = ");
         scanf("%d",&num2);
         result = calculator(operation,num1,num2);
         printf("result = %d ",result);
     }

     return 0;
     #endif // PROBLEM13

     #ifdef FIBONACCI
     int arr[SIZE];
     int counter = 0;
     while (1)
     {
      printf("\n start num = ");
      scanf("%d",&arr[0]);
      fibonacci_series(arr,counter);
     }
     return 0;
     #endif //

     #ifdef PROBLEM8
     int primeSize;
     while (1)
     {
        printf("\n please enter scope of prime number u want to display: ");
        scanf("%d",&primeSize);
        display_prime(primeSize);
     }
     return 0;
     #endif // PROBLEM8
     #ifdef problem17
     int arrSize1,arrSize2;
     int *arr1, *arr2;
     while (1)
     {
      printf("\n arrSize1 = ");
      scanf("%d",&arrSize1);
      arrSize2 = arrSize1;
      arr1 = (int*)(malloc(arrSize1*sizeof(int)));
      printf("\n enter elements of arr1 :");
      for(int count1 = 0;count1<arrSize1;count1++)
      {
        printf("\n arr1[%d] = ",count1);
        scanf("%d",&arr1[count1]);
      }
      printf("\n enter elements of arr2 :");
      arr2 = (int*)(malloc(arrSize2*sizeof(int)));
      for(int count2 = 0;count2<arrSize1;count2++)
      {
        printf("\n arr2[%d] = ",count2);
        scanf("%d",&arr2[count2]);
      }

      printf("\n after swapping arrays; ");
      swap_array(arr1,arrSize1,arr2);
      free(arr1);
      free(arr2);
     }
     return 0;
     #endif // problem17
     #ifdef BUBBLESORT

     int arrSize;
     int *arr;
     while(1)
     {
         printf("\n arrSize = ");
         scanf("%d",&arrSize);
         arr = (int*)malloc(arrSize*sizeof(int));
         for(int counter = 0;counter<arrSize;counter++)
         {
           printf("\n arr[%d] = ",counter);
           scanf("%d",&arr[counter]);
         }
         printf("after Bubble sorting : ");
         bubble_sort(arr,arrSize);
         free(arr);
     }

     return 0;
     #endif // BUBBLESORT

     #ifdef SELECTIONSORT
     int arrSize;
     int *arr;
     int index =0;
     while(1)
     {
       printf("\n arrSize = ");
       scanf("%d",&arrSize);
       arr = (int*)malloc(arrSize*sizeof(int));
       printf("enter array elements");
       for(int i = 0;i<arrSize;i++)
       {
        printf("\n arr[%d] = ",i);
        scanf("%d",&arr[i]);
       }
       printf("\n array elements after selection sort: ");
       selection_sort(arr,arrSize,index);
       printArr(arr,arrSize);
       free(arr);
     }

     return 0;
     #endif // SELECTIONSORT
}



