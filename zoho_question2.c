//Given the array fill the automatic elements by 0(zero)
#include<stdio.h>
int main()
{
    int arr[]={1,2,2,3,2,3,3,5,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int  i,n,j;

    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        if(arr[i]==arr[j])
        {
            arr[j]=0;
            break;
        }

    }
    for(i=0;i<size;i++)
        printf("%d",arr[i]);
}
