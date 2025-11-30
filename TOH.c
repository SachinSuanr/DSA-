//The tower of hanoi
#include<stdio.h>

void TOH(int n,int A,int B,int C){
    if(n>0){
        TOH(n-1,A,C,B);
        printf("\nMove disk %d from %c to %c.",n,A,B);
        TOH(n-1,C,B,A);
    }
}

int main(){
    int x;
    printf("Enter the number of disk: ");
    scanf("%d",&x);
    TOH(x,'A','B','C');
    return 0;
} 