#include <cstdio>
#include <iostream>

void insertsort(int a[],int n)
{
    int j;
    for(int i=2;i<=n;i++)
    {
        if(a[i]<a[i-1])
        {
            a[0]=a[i];
            a[i]=a[i-1];
            for(j=i-2;a[0]<a[j];j--)a[j+1]=a[j];
            a[j+1]=a[0];
        }
        for(int j=1;j<=n;j++)printf("%d ",a[j]);
        printf("\n");
    }
}

main()
{
    int a[1000],n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    insertsort(a,n);
}
