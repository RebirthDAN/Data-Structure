#include <cstdio>
#include <iostream>

void combine(int a[],int low,int mid,int high)
{
    int temp[1000];
    int i=low,j=mid+1,k=0;
    while(i<=mid&&j<=high)  
    {  
        if(a[i]<=a[j])  
            temp[k++]=a[i++];  
        else  
            temp[k++]=a[j++];  
    }  
    while(i<=mid) temp[k++]=a[i++];  
    while(j<=high) temp[k++]=a[j++];  
    for(i=low,k=0;i<=high;i++,k++)  
        a[i]=temp[k];   
}

void Msort(int a[],int n)
{
    int size=1,low,mid,high;
    while(size<=n-1)
    {
        low=1;
        while(low+size<=n)
        {
            mid=low+size-1;
            high=mid+size;
            if(high>n)high=n;
            combine(a,low,mid,high);
            low=high+1;
        }
        for(int i=1;i<=n;i++)printf("%d ",a[i]);
        printf("\n");
        size*=2;
    }
}

main()
{
    int a[1000],n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    Msort(a,n);
}
