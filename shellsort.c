/// shell sorting  

# include<stdio.h>
int main (){
    int A[]={9,6,3,5,4,51,2,46};
    int i,j,temp,n=8,gap;

    for(gap=n/2;gap>0;gap=gap/2){
        for(i=gap;i<n;i++){
        temp=A[i];
        j=i-gap;
        while(j >= 0 && temp < A[j]){
            A[j+gap]=A[j];
            j = j-gap;
        }
        A[j+gap]=temp;
    }

    }
    
    printf("Shell sort.\n");
    printf("After sorting....\n");
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }

    return 0;
}