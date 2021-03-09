#include <iostream>

using namespace std;

void BubbleSort(int A[], int n)
{
  for(int k=1;k<n-1;k++)
  {
    int flag = 0;
    for(int i=0;i<n-k-1;i++)
    {
      if(A[i]>A[i+1])
      {
        int temp = A[i];
        A[i] = A[i+1];
        A[i+1] = temp;

        flag=1;
      }
    }
    // IF no two elements were swapped by inner loop, then break
    if(flag==0)
    {
        break;    
    }
  }
}

int main()
{
  int A[] = {27,7,4,1,56,23,200,100,300};
  BubbleSort(A,9);
  for(int i=0;i<9;i++){
    cout<<A[i]<<" ";
  } 
}


/* 

Time Complexity = O(n^2)

Slow Sorting algorithm

Inplace

*/