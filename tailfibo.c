// Fibonacci number using tail recursion
#include<stdio.h>
int fibonaaci(int n,int a,int b){
    if(n == 0){
        return a;
    }
    else{
        return fibonaaci(n-1,b,a+b);
    }
}

int main(){
    int x,f;
    printf("Enter the number: ");
    scanf("%d",&x);
    f=fibonaaci(x,0,1);
    printf("The fibonacci sum is: %d",f);

    return 0;
}