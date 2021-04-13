//23.Abundant Numbers
#include<iostream>
#include<math.h>
#define limit 10000
using namespace std;
int factsum (int);
int a[limit],b[limit*3];
int main()
{
    int i,j, acount=0,sum=0,bcount=0,k,flag,m;

    for(i=0;i<limit;i++)
       {a[i]=0;b[i]=0;}

    for(i=1;i<28124;i++)
        if(i<factsum(i))
            a[acount++]=i;

    for(i=0;i<acount;i++)
        for(j=i;j<acount ;j++)
        {   if((a[i]+a[j])>28124)
                break;

            flag=1;
            for(k=0;k<bcount;k++)
                if(b[k]==a[i]+a[j])
                    flag=0;

            if(flag==1)
            {   bcount++;k=a[i]+a[j];
                for(m=bcount;b[m-1]>k && m>=0;m--)
                    b[m]=b[m-1];

                b[m-1]=k;
                sum+=k;
                cout<<b[m-1]<<" ";
            }
        }

    sum=(28123*28124/2)-sum;
    cout<<"\n"<<sum;

    return(0);
}

int factsum(int i)
{
    int j,sum=1;
        for(j=2;j<sqrt(i);j++)
            if(i%j==0)
                sum+=j+(i/j);
    return(sum);
}
