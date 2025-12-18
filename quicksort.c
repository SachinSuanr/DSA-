// quick sorting

#include<stdio.h>
int partition(int A[],int left,int right)
{
    int l=left;
    int pivot=A[left];
    int temp;
    while(left<right)
    {
        while(A[left]<pivot)
        {
            left++;
        }
        while (A[right]>pivot)
        {
            right--;
        }
        if (left<right)
        {
            temp=A[right];
            A[right]=A[left];
            A[left]=temp;
        }
    }
    if (left>right)
    {
        A[l]=A[right];
        A[right]=A[pivot];
        return right;
    }
}
void quickSort(int A[], int left, int right)
{
     int p;
    if (left< right) 
    {
        int p = partition(A, left, right);
        quickSort(A, left, p - 1);
        quickSort(A, p + 1, right);
    }
}
   


int main() 
{
    int n=8;
    int A[]={2,5,1,54,20,12,9,4};
    int left=0,right=7,i,j;
    printf("array before sorting \n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    quickSort(A, 0, n - 1);

    printf("array after sorting:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}

    
