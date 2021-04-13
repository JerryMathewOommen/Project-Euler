#include<iostream>
#include<math.h>
using namespace std;

int countfac(int);

int main()
{   int i,p,j,countmax=0;

    for(i=2;i<500;i++)
    {   j=countfac(i);
        if(j>countmax)
            {countmax=j;
            p=i;
            }
    }

    cout<<p*2;
    return(0);
}

int countfac(int a)
{   int i,fcount=0;
    cout<<a<<" ";
    for(i=2;i<sqrt(a);i++)
        if(a % i == 0 && ((a/i) < 2*i) )
            {   cout<<i<<" ";
                fcount++;
            }
        cout<<"\n";
    return(fcount);
}
