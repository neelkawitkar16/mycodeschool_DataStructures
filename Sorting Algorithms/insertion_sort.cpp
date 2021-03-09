#include <iostream>

using namespace std;

void InsertionSort(int A[], int n)
{
  for(int i=1;i<n-1;i++)
  {
    int value = A[i];
    int hole = i;

    while(hole>0 && A[hole-1] > value)
    {
      A[hole] = A[hole-1];
      hole = hole-1;
    }
    A[hole] = value;
  }
}


int main()
{
  int A[] = {23,4,11,3,4,56};
  InsertionSort(A,6);
  for(int i=0;i<6;i++){
    cout<<A[i]<<" ";
  }
}


/* 

Time Complexity = O(n^2)

Better than Selection Sort and Bubble Sort as the number of comparison and shifts are less.

Inplace

*/