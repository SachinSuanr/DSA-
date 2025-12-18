///Binary search code 

#include<stdio.h>
int main()
{
    int arr[]={2,5,8,9,11,15,19,20,25},left=0,right=8,mid,key,found=0;

    printf("Binary searching.\n");
    printf("Enter the value of the key: ");
    scanf("%d",&key);

    while (left<=right)
    {
        mid = (left+right)/2;
        if (arr[mid] == key)
        {
            found = 1;
            break;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    if(found == 1)
    {
        printf("Key is found.");
    }
    else
    {
        printf("Key not found.");
    }
    return 0;    
}