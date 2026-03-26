/// practice of binary searching 

// #include<stdio.h>
// int main()
// {
//     int arr[]={1,2,5,10,12,48,54,54,54,55,74,90,124};
//     int left=0,right=12,mid,key,found= 0;

//     printf("Binary searching....\n");
//     printf("Enter the value of the key: ");
//     scanf("%d",&key);

//     while (left <= right){
//         mid = (left + right) / 2;

//         if(key == arr[mid]){
//             found = 1;
//             break;
//         }
//         else if(key < arr[mid]){
//             right = mid - 1;
//         }
//         else{
//             left = mid + 1;
//         }
//     }

//     if(found == 1){
//         printf("Key is found in the array.\n");
//     }
//     else{
//         printf("Key is not found in the array.");
//     }

//     return 0;
// }


// linear searching

# include<stdio.h>
int main(){
    int arr[]= {2, 5, 1, 54, 48, 124, 55, 54, 12, 54, 10, 90, 74};
    int key, count = 0;

    printf("Enter the key to be searched:  \n");
    scanf("%d",&key);

    for(int i=0 ; i<13 ; i++){
        if(key == arr[i]){
            count = 1;
            break;
        }
    }
    if(count == 1){
        printf("Key is found....\n");
    }
    else{
        printf("Not found.....");
    }
    return 0;
}