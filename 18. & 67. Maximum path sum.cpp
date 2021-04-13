#include<iostream>
#include<math.h>
#define size 15
using namespace std;
int main()
{
    int a[size][size],b[size],i,j;
    cout<<"Enter the triangle array:\n";
    for(i=0;i<size;i++)
    {   for(j=0;j<i+1;j++)
            cin>>a[i][j];
        b[i]=0;
    }
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<i+1;j++)
        {
            if((a[i][j]+a[i+1][j]) > b[j] )
                b[j]=a[i][j]+a[i+1][j];
            if(j+1<i+2 && (a[i][j]+a[i+1][j+1]) > b[j+1] )
                b[j+1]=a[i][j]+a[i+1][j+1];
        }
        for(j=0;j<i+2;j++)
            a[i+1][j]=b[j];
    }
    for(j=0;j<size;j++)
    if(i<b[j])
        i=b[j];
    cout<<"\n"<<i;
}
