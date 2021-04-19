//Given a sorted array of given distinct integers and a target value,return the index if the target is found.if not return the index where it would be if it is inserted in order.
#include<stdio.h>
int main()
{
    int arr[]={1,2,3,5,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int  i,n;
    scanf("%d",&n);
    for(i=0;i<size;i++)
    {
        if(arr[i]==n||arr[i]<n&&arr[i+1]>n)
            printf("%d",i+1);
    }
}
