/// Insertin sort 

# include<stdio.h>
int main (){
    int A[]={9,8,7,5,4,55,2,44};
    int i,j,temp,n=8;

    for(i=0;i<n;i++){
        temp=A[i];
        j=i-1;
        while(j >= 0 && temp < A[j]){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=temp;
    }

    printf("Insertion sort.\n");
    printf("After sorting....\n");
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }

    return 0;
}