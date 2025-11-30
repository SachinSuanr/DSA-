/// binary search in main function

# include<stdio.h>

void BinarySearch(int a[],int left,int right,int key){
    int found = 0;
    while(left <= right){
        int mid = (left+right)/2;
        
        if(key == a[mid]){
            found = 1;
            break;
        }
        else if(key < a[mid]){
            right = mid -1;
        }
        else{
            left = mid + 1;
        }
    }
    if(found == 1){
        printf("Key is found.");
    }
    else{
        printf("Key is not found.");
    }
}

int main(){
    int arr[]={2,3,4,5,8,9,10,15,18,19};
    int key,l=0,r=9;
    
    printf("Enter the value of the key: ");
    scanf("%d",&key);
    BinarySearch(arr,l,r,key);
    
    return 0;
}