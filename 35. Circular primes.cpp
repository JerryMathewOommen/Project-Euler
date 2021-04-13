#include<iostream>
#include<math.h>
int checkprime(int );
using namespace std;
int main()
{
    int i,j,k,dig,num,lb=2,ub=10,cpcount=0;
    for(i=0;i<6;i++)
    {   for(j=lb;j<ub;j++)
            if(checkprime(j))
            {   num=j;
                for(k=0;k<i;k++)
                {   dig=num/lb;num%=lb;
                    num*=10;num+=dig;
                    if(!checkprime(num))
                       break;
                }
                if(i==k)
                    cout<<j<<" ";
            }
        lb=ub;ub*=10;
    }
    return(0);
}
int checkprime(int a)
{   int i,j;
    j=sqrt(a);
    for(i=2;i<=j;i++)
        if(a%i==0)
            break;
    if(i>j)
        return(1);
    else
        return(0);
}
