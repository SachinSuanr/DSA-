//sequential or liner search
#include<stdio.h>

int main(){
    int arr[]={1,2,4,5,7,9,6},num,count=0;
    printf("Enter the number to be search: \n");
    scanf("%d",&num);

    for(int i=0;i<num;i++){
        if(num == arr[i]){
            count = 1;
            break;
        }
    }
    if(count == 1){
        printf("Number lies in the array.");
    }
    else{
        printf("Nuber doesnot lies in the array.");
    }
    return 0;
    
}