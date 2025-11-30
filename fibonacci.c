//Fibonacci number 
# include <stdio.h>
int fibonaaci(int n){
    if(n<=2){
        return 1;
    }
    else{
        return fibonaaci(n-1)+fibonaaci(n-2);
    }
}

int main(){
    int x,f;
    printf("Enter the number: ");
    scanf("%d",&x);
    f=fibonaaci(x);
    printf("The fibonacci sum is: %d",f);

    return 0;
}