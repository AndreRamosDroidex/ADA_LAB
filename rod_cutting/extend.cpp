#include <iostream>
#include <fstream>
#include <stdio.h>
#include <limits.h>
#include <time.h> 

using namespace std;

 int Extended_Cut_Rod(int p[],int n){
  int r[n];
  int s[n];
  int q;
  r[0] = 0;
  for (int j = 1; j<n;j++){
   q = INT_MIN;
   for (int i = 1 ;i<j;i++){
     if (q < p[i] + r[j-i]) 
        q = p[i] + r[j-i];
        s[j] = i;
     }
   r[j] = q;
   }

 return 0;
}

 int main()
{
	clock_t start, end; 
    double secs;
    int arr[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<< size<<endl;
    start = clock(); 
    printf("Maximum Obtainable Value is %d\n", Extended_Cut_Rod(arr, size));
    getchar();
    end = clock(); 
    secs = (double)(end - start) / CLOCKS_PER_SEC;
    printf("%.16g milisegundos\n", secs * 1000.0);
    return 0;
}