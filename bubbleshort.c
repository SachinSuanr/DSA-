//Normal bubble short

# include<stdio.h>
int main()
{
    int Arr[]={2,8,7,4,5,9,6};
    int n=7,temp;
    printf("Before sorting.\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",Arr[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(Arr[j]>Arr[j+1])
            {
                temp=Arr[j];
                Arr[j]=Arr[j+1];
                Arr[j+1]=temp;
            }
        }
    }
    printf("\nAfter sorting\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",Arr[i]);
    }
    return 0;
}