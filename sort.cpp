#include<stdio.h>
void printArray(int arr[], int n)
{
    printf("The elements of the array: ");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int min_finder(int arr[],int f,int l)
{
    int min=f;
    for(int i=f+1;i<l;i++)
    {
        if(arr[i]<arr[min])
        {
            min=i;
        }
    }
    return min;
}
void bubble_sort(int arr[],int n)
{
    for(int boundaryline=n-2;boundaryline>=0;boundaryline--)
    {
        for(int i=0;i<=boundaryline;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int t=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=t;
            }
        }
    }
}
void selection_sort(int arr[],int n)
{
    for(int currentpos=0;currentpos<n-1;currentpos++)
    {
        int minindex=min_finder(arr,currentpos,n-1);

        int temp=arr[currentpos];
        arr[currentpos]=arr[minindex];
        arr[minindex]=temp;

    }

}
void insertion_sort(int arr[],int n)
{
    for(int index=1;index<n;index++)
    {
        int key=arr[index];
        int c=index;
        while (c>0&&arr[c-1]>key)
        {
            arr[c]=arr[c-1];
            c--;
        }
        arr[c]=key;
        printArray(arr, n);
    }
}
int main()
{
    int arr[7] = {3, 5, 4, 2, 1, 8, 7};
    int n = 7;
    printArray(arr, n);
    insertion_sort(arr, n);
    printArray(arr, n);
    return 0;
}
