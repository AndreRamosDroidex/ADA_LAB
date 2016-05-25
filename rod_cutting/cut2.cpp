#include <iostream>
#include <fstream>
#include <stdio.h>
#include <limits.h>
using namespace std;

 
int max(int a, int b) { return (a > b)? a : b;}
 

int cutRod(int price[], int n)
{
   int val[n+1];
   val[0] = 0;
   int i, j;
 
 
   for (i = 1; i<=n; i++)
   {
       int max_val = INT_MIN;
       for (j = 0; j < i; j++)
         max_val = max(max_val, price[j] + val[i-j-1]);
       val[i] = max_val;
   }
 
   return val[n];
}
 
int main()
{
    clock_t start, end; 
    double secs;
    int arr[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int size = sizeof(arr)/sizeof(arr[0]);
    start = clock(); 
    printf("Maximum Obtainable Value is %d\n", cutRod(arr, size));
    getchar();
    end = clock(); 
    secs = (double)(end - start) / CLOCKS_PER_SEC;
    printf("%.16g milisegundos\n", secs * 1000.0);
    return 0;
}