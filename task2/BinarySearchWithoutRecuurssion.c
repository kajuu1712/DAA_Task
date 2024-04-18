#include <stdio.h>
void binarySearch();
void sortArray();
int main()
{
    int arr[]={34,21,78,35,67,44,90,38};
    int n=8;
    printf("Sorted array is: \n");
    sortArray(arr,n);
    int key;
    printf("\nEnter the element you want to search: ",key);
    scanf("%d",&key);
    binarySearch(arr,key,n);
}
void sortArray(int arr[],int n)
{
    //selection sort
    int i,j,pos,temp;
    for(i=0;i<n-1;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[pos]>arr[j])
            {
                pos=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[pos];
        arr[pos]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void binarySearch(int arr[],int key,int n )
{
    int low=0,high=n-1;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(key==arr[mid])
        {
            printf("Element found at position %d",mid+1);
            return;
        }
        else if(key<arr[mid])
        {
            high=mid-1;
        }
        else
            low=mid+1;
    }
}
