#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,m,sum;
    int a,b,c;
    cout<<"Pythagorean triples and their sum are :\n";
    for(m=2;c <= 1000;m++)
        for(n=1;n<m ;n++)
        {
            a=m*m-n*n;
            b=2*m*n;
            c=m*m+n*n;
            sum= a+b+c;
            cout<<a<<" "<<b<<" "<<c<<" "<<sum<<"\n";
            if(sum==1000)
                exit(0);
        }

return(0);
}
