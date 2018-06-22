#include <cstdio>
#include <iostream>

void Selectsort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int min=a[i],mins=i,tmp;
        for(int j=i;j<=n;j++) if(a[j]<min){min=a[j];mins=j;}
        if(i!=mins){tmp=a[i];a[i]=a[mins];a[mins]=tmp;}
        for(int j=1;j<=n;j++)printf("%d ",a[j]);
        printf("\n");
    }
}

main()
{
    int a[1000],n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    Selectsort(a,n);
}
