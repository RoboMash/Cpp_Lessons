#include <iostream>
using namespace std;

void SelectionSort(int A[], int n)
{
    for (int i=0; i<n-1; i++) // we need to do n-2 passes
    {
        int iMin = i; //ith position: elements from i till n-1 are the candidates
        for (int j = i+1; j<n; j++)
        {
            if(A[j] < A[iMin])
            iMin = j; // update the index of minimum element
        }
        int temp = A[i];
        A[i] = A[iMin];
        A[iMin] = temp;
    }

}

int main ()
{
    int A[]= {2, 7, 4, 1, 5, 3};
    SelectionSort(A,6);
    for(int i = 0; i<6; i++)
        cout<<A[i]<< " ";

}