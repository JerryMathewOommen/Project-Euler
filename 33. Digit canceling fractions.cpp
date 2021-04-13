//33. Digit canceling fractions
#include<iostream>
using namespace std;
int main()
{   int i,j,k;

    for(i=1;i<10;i++)
        for(j=i+1;j<10;j++)
            for(k=1;k<10;k++)
            {   if(i*10 +k < j*10+k)
                {   if( (double)i/j == (double)(i*10 +k)/(j*10 + k) )
                    cout<<"("<<i*10+k<<","<<j*10+k<<")\n";
                }
                if(i*10 +k < k*10 +j)
                {   if( (double)i/j == (double) (i*10 +k)/(k*10 +j) )
                    cout<<"("<<i*10+k<<","<<k*10+j<<")\n";
                }
                if(k*10 +i < j*10 +k)
                {   if( (double)i/j == (double) (k*10 +i)/(j*10 +k) )
                    cout<<"("<<k*10+i<<","<<j*10+k<<")\n";
                }
                if(k*10 +i < k*10 +j)
                {   if( (double)i/j == (double) (k*10 +i)/(k*10 +j) )
                    cout<<"("<<k*10+i<<","<<k*10+j<<")\n";
                }
            }
}
