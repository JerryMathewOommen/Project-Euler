#include<iostream>
using namespace std;
int main()
{   int m[12]={3,0,3,2,3,2,3,3,2,3,2,3},day=2;
    int i,j,scount=0;
    for(i=1901;i<2001;i++)
    {   if(i%4==0 && (i%100 != 0 || i%400==0))
        m[1]=1;
        else
        m[1]=0;
    for(j=0;j<12;j++)
    {
        day+=m[j];
        if(day%7==0)
        scount++;
    }
    }
    cout<<scount;
}
