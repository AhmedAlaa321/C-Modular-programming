#ifndef HEADERS_H
#define HEADERS_H

extern char convert_to_uppercase(char smallLetter);
extern void fibonacci_series(int arr[],int counter);
extern int calculator(char operation,int num1,int num2);
extern void display_prime(int primeSize); //algorithm error
extern void swap_array(int *pArr1,int arrSize1,int *pArr2);
extern void bubble_sort(int *pArr,int arrSize);
extern void selection_sort(int *pArr,int arrSize,int index);
extern void swap_elements(int *num1,int *num2);
extern void printArr(int arr[],int arrSize);

#endif // HEADERS_H
