//4.Largest palindrome product
#include<iostream>
#include<math.h>
using namespace std;
#define base 10
#define a2size 3//ceil(log(base2, limit))
#define b2size 1998//pow(base2,a2size)
int a2[a2size],b2[b2size];
int b2count=0;
void permute (int);
void isort (int [],int);
int main()
{
     int i, j;
     float div;
     for(i=0;i<a2size;i++)
        a2[i]=0;
     for(i=0;i<b2size;i++)
        b2[i]=0;
     permute(0);
     isort(b2,b2size);
     for(i=0;i<b2size;i++)
        {for(j=100;j<1000;j++)
         {
             div= (float) b2[i]/j;
             if(int(div)==div && div>=100 && div<1000 )
                {
                cout<<"Largest palindrome number that can be expressed as the product of two three digit numbers is : \n";
                cout<<b2[i]<<" = "<<j<<" * "<<div<<"\n";
                exit(0);
                }
         }
        }

}
void permute(int pos)
{
    int i,j;
    if(pos==3)//3=a2size
    {
        for(i=0;i<a2size && a2[i]==0;i++);
        for(j=i;j<a2size;j++)
            b2[b2count]+= a2[j]*(pow(10,5-j-i) + pow(10,j-i));//5=2*b1size-1,10=base2
        b2count++;
        for(j=i;j<a2size-1;j++)
            b2[b2count]+=a2[j]*(pow(10,4-j-i) + pow(10,j-i));//4=2*b1size-2,10=base2
        b2[b2count]+=a2[j]*pow(10,j-i);//10=base2
        b2count++;
        return;
    }
    for(i=9;i>=0;i--)//i=base2-1
    {
        a2[pos]=i;
        permute(pos+1);
    }
    return;
}
void isort(int a[],int n)
{
    int i,j,key;
    for(i=1;i<=n-1;i++)
    {   key=a[i];
        for(j=i-1;j>=0 && key>a[j];j--)
            a[j+1]=a[j];
        a[j+1]=key;
    }
}

