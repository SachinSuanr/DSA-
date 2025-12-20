///Merge sorting in c programming

#include<stdio.h>

void merge(int A[],int left,int right){
    int L=left;
    int end = (left+right)/2;
    int mid = end + 1;
    int temp[100],pos = left;

    while(left <= end && mid <= right){
        if(A[left] < A[mid]){
            temp[pos] = A[left];
            left++;
        }
        else{
            temp[pos] = A[mid];
            mid++;
        }
        pos++;
    }
    while(left <= end){
        temp[pos] = A[left];
        left++;
        pos++;
    }
    while(mid <= right){
        temp[pos] = A[mid];
        mid++;
        pos++;
    }
    for(int i=0;i<=right;i++){
        A[i]=temp[i];
    }
}

void mergesort(int A[],int left,int right){
    if(left < right){
        int mid = (left+right)/2;
        mergesort(A,left,mid);
        mergesort(A,mid+1,right);
        merge(A,left,right);
    }
}


int main() {
    int A[]={9,5,7,8,1,2,4,3};
    int left=0,right=7;
    mergesort(A,0,right);
    
    printf("After sorting...\n");
    
    for(int i=left;i<=right;i++){
        printf("%d ",A[i]);
    }
    
    return 0;
}