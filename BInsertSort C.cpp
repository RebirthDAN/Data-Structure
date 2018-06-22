#include <cstdio>
#include <iostream>

void Binsertsort(int a[],int n)
{
    int j;
    for(int i=2;i<=n;i++)
    {
        if(a[i]<a[i-1])
        {
            a[0]=a[i];
            int low=1,high=i-1;
            while(low<=high)
            {
                int m=(low+high)/2;
                if(a[0]<a[m])high=m-1;
                else low=m+1;
            }
            for(j=i-1;j>=high+1;j--)a[j+1]=a[j];
            a[high+1]=a[0];
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
    Binsertsort(a,n);
}
