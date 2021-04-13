#include<iostream>
using namespace std;
#define limit 10001
int main()
{
    int i,j,a[limit],flag,count=0;
    for(i=2;count<limit;i++)
    {   flag=1;
        for(j=0;j<count;j++)
        {
            if(i % a[j] == 0)
                flag=0;
        }
        if(flag==1)
            a[count++] = i;
    }
    for(i=0;i<limit;i++)
    {cout<<a[i]<<" ";
     if(i%10 == 9)
        cout<<"\n";
    }
}
