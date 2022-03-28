#include "headers.h"

//static void printArr(int arr[],int arrSize);
static int detectMin(int arr[],int arrSize,int index);

extern char convert_to_uppercase(char smallLetter)
{
  char capitalLetter ;
  capitalLetter =  smallLetter - 32;
  return capitalLetter;
}

extern void fibonacci_series(int arr[],int counter)
{
    //using recursion
    if(counter == 0)
    {
        printf("%d",arr[0]);
        arr[1] = arr[0] + 1;
        arr[2] = arr[0] + arr[1];
        printf(",%d",arr[1]);
        printf(", %d",arr[2]);
        counter++;
        fibonacci_series(arr,counter);
    }
    else if(counter > 0 && counter < 10) //determine length of series
    {
        arr[0] = arr[1];
        arr[1] = arr[2];
        arr[2] = arr[0]+arr[1];
        printf(", %d",arr[2]);
        counter++;
        fibonacci_series(arr,counter);
    }
    counter = 0;
}


extern int calculator(char operation,int num1,int num2)
{
    switch (operation)
    {
     case '+':return num1 + num2; break;
     case '-':return num1 - num2; break;
     case '*':return num1 * num2; break;
    }
}


extern void display_prime(int primeSize)
{
  printf("Primen Numbers are :\n 2 ,3 ,");
  for(int num = 2;num < primeSize; num++)
  {
      if(((num%2)== 1)&&((num%3)==1)&&((num%5)==1))
      {
          printf("%d ,",num);
      }

      /*
      else
      {
          printf("no prime number in: %d iteration \n",num);
      }*/
  }
}

extern void swap_array(int *pArr1,int arrSize,int *pArr2)
{
    int tempArr[arrSize];
    for(int count1=0;count1<arrSize;count1++)
    {
        tempArr[count1]= pArr1[count1];
        //pArr1[count1] = pArr2[count1];
    }
    for(int count2 = 0;count2<arrSize;count2++)
    {
        pArr1[count2] = pArr2[count2];
    }
    for(int count3=0;count3<arrSize;count3++)
    {
        pArr2[count3]= tempArr[count3];
    }
    //printing prototype
    printf("\n elements of arr1 :");
    printArr(pArr1,arrSize);
    printf("\n elements of arr2 :");
    printArr(pArr2,arrSize);
}

extern void selection_sort(int *pArr,int arrSize,int index)
{
    //detect index of minimum value in the array
    int minIndex = detectMin(pArr,arrSize,index);
    swap_elements(&pArr[index],&pArr[minIndex]);
    index = index + 1; //increment index
    //arrSize = arrSize - 1;
    if(index<arrSize)
    {
      selection_sort(pArr,arrSize,index);
    }
}

static int detectMin(int arr[],int arrSize,int index)
{
    int minIndex = 0;
    for(int i =index;i<arrSize-1;i++)
    {
        if(arr[i]<arr[minIndex])
        {
          minIndex = i;
        }
    }
    //printf("\n arr[minIndex] =  %d minIndex = %d ",arr[minIndex],minIndex);
    return minIndex;
}

extern void bubble_sort(int *pArr,int arrSize)
{
    for(int iterations=0;iterations<arrSize;iterations++)
    {
        for(int n =0;n<arrSize-1;n++)
        {
            if(pArr[n]>pArr[n+1])
            {
                swap_elements(&pArr[n],&pArr[n+1]); //algorithm tmm
            }
        }
    }
    printArr(pArr,arrSize);
}

extern void swap_elements(int *num1,int *num2)
{
    int temp = 0;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

extern void printArr(int arr[],int arrSize)
{
    for(int counter=0;counter<arrSize;counter++)
    {
      printf("\n arr1[%d] = %d ", counter, arr[counter]);
    }
}

/*
extern void selection_sort(int *pArr,int arrSize)
{
  int indexMin;
  for(int passes=0;passes<arrSize-1;passes++)
  {
      indexMin = passes;
      for(int j=passes+1;j<arrSize;j++)
      {
        if(pArr[j]<pArr[indexMin])
            indexMin = j;
      }
      swap_elements(&pArr[passes],&pArr[indexMin]);
  }
  printArr(pArr,arrSize);
}*/
