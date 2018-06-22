#include <iostream>
using namespace std;
#define MAXN 1000
typedef struct Sqlist{
    int A[MAXN];
    int length;
}SqList;


void print(SqList H){
    for(int i=1;i<=H.length;i++)
        cout<<H.A[i]<<" ";
    cout<<endl;
}

void HeadAjust(SqList &H,int s,int m){
    int tmp=H.A[s];
    for(int j=s<<1;j<=m;j*=2){
        if(j<m&&H.A[j]<H.A[j+1]) j++;
        if(!(tmp<H.A[j])) break;
        H.A[s]=H.A[j];
        s=j;
    }
    H.A[s]=tmp;
}

void HeapSort (SqList &H){
    for(int i=H.length/2;i>0;i--)
        HeadAjust(H,i,H.length);
    print(H);
    for(int i=H.length;i>1;i--){
        int tmp=H.A[1];
        H.A[1]=H.A[i];
        H.A[i]=tmp;
        HeadAjust(H,1,i-1);
        print(H);
    }
}

int main(){
    int n;
    SqList H;
    cin>>n;
    H.length=n;
    for(int i=1;i<=n;i++)
        cin>>H.A[i];
    HeapSort(H);
    return 0;
}
/*堆排序
时间限制:1000MS  内存限制:1000K
提交次数:1909 通过次数:1257

题型: 编程题   语言: G++;GCC
Description
用函数实现堆排序，并输出每趟排序的结果



输入格式
第一行：键盘输入待排序关键的个数n
第二行：输入n个待排序关键字，用空格分隔数据


输出格式
第一行：初始建堆后的结果
其后各行输出交换堆顶元素并调整堆的结果，数据之间用一个空格分隔


输入样例
10
5 4 8 0 9 3 2 6 7 1


输出样例
9 7 8 6 4 3 2 5 0 1
8 7 3 6 4 1 2 5 0 9
7 6 3 5 4 1 2 0 8 9
6 5 3 0 4 1 2 7 8 9
5 4 3 0 2 1 6 7 8 9
4 2 3 0 1 5 6 7 8 9
3 2 1 0 4 5 6 7 8 9
2 0 1 3 4 5 6 7 8 9
1 0 2 3 4 5 6 7 8 9
0 1 2 3 4 5 6 7 8 9
*/
