//Tail Recursion : Factorial 
#include<stdio.h>
int factori(int n, int acc){
    if(n == 0 || n == 1){
        return acc;
    }
    return factori(n - 1, n * acc);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = factori(n, 1);
    printf("The factorial of %d is: %d", n, result);
    return 0;
}
