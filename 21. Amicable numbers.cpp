//21.Amicable Numbers
#include<iostream>
#include<math.h>
#define limit 30000
using namespace std;
int factsum (int );
int a[limit];
int main()
{
    int i, sum=0;

    for(i=0;i<limit;i++)
        a[i]=0;

    for(i=1;i<limit/3;i++)
        if(i==factsum(factsum(i)) && i!=factsum(i))
            sum+=i;

    cout<<sum;

    return(0);
}

int factsum(int i)
{
    int j,sum=1,s;

    if(a[i]!=0)
        return(a[i]);
    else
    {   s=sqrt(i);
        for(j=2;j<=s;j++)
            {
                if(i%j==0)
                sum+=j+(i/j);
            }
        if(i==s*s)
            sum-=s;
    }
    a[i]=sum;
    return(sum);
}
