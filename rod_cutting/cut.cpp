#include <iostream>
#include <fstream>
#include <stdio.h>
#include <time.h> 
#include <limits.h>
using namespace std;
 
int max(int a, int b) { return (a > b)? a : b;}
 

int cutRod(int price[], int n)
{
   if (n <= 0)
     return 0;
   int max_val = INT_MIN;
 
   for (int i = 0; i<n; i++)
         max_val = max(max_val, price[i] + cutRod(price, n-i-1));
 
   return max_val;
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