#include <cstdio>
#include <iostream>

void Shellsort(int a[],int n)
{
    int count=0,j;
    for(int d=n/2;d>0;d/=2)
    {
        for(int i=d+1;i<=n;i++)
        {
            if(a[i]<a[i-d])
            {
                a[0]=a[i];
                for(j=i-d;j>0&&a[0]<a[j];j-=d) a[j+d]=a[j];
                a[j+d]=a[0];
                count=1;
            }
        }
        if(count==1){for(j=1;j<=n;j++)printf("%d ",a[j]);printf("\n");count=0;}
    }
}

main()
{
    int a[1000],n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    Shellsort(a,n);
}
