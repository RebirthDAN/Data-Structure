#include <cstdio>
#include <iostream>

int partition(int a[],int low,int high,int n)
{
    a[0]=a[low];
    int pivotkey=a[low];
    while(low<high)
    {
        while(low<high&&a[high]>=pivotkey) high--;
        a[low]=a[high];
        while(low<high&&a[low]<=pivotkey) low++;
        a[high]=a[low];
    }
    a[low]=a[0];
    for(int i=1;i<=n;i++)printf("%d ",a[i]);
    printf("\n");
    return low;
}

void QSort(int a[],int low ,int high,int n)
{
    if(low<high)
    {
        int pivotloc=partition(a,low,high,n);
        QSort(a,low,pivotloc-1,n);
        QSort(a,pivotloc+1,high,n);
        
    }
}

main()
{
    int a[100],n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    QSort(a,1,n,n);
}
