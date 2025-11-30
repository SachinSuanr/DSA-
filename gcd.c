//GCD 
#include <stdio.h>

int gcd(int x,int y){
    if(x % y == 0){
        return y;
    }
    else{
        return gcd(y,x % y);
    }
}
int main(){
    int a,b;
    printf("Enter the value of a and b: \n");
    scanf("%d%d",&a,&b);
    printf("The gcd of the given number is: %d",gcd(a,b));
    return 0;
}