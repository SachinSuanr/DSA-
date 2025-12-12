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
   
    printf("Fibonacci sequence:\n");
    for (int i = 1; i <= x; i++) {
        f = fibonaaci(i);
        printf("%d ", f);
    }


    return 0;
}