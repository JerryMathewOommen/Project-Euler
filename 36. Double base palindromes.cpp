//36.Double base palindromes
#include<iostream>
#include<math.h>
using namespace std;
#define limit 1000000
#define base1 2
#define base2 10
#define a1size 10//ceil(log(base1,limit))
#define b1size 2046//pow(base1,a1size)
#define a2size 3//ceil(log(base2, limit))
#define b2size 1998//pow(base2,a2size)
int a1[a1size],b1[b1size],a2[a2size],b2[b2size];
int b1count=0,b2count=0;

void permute1 (int);
void permute2 (int);
void isort (int [],int);
int compare();

int main()
 {
     int i, j;
     for(i=0;i<a1size;i++)
        a1[i]=0;
     for(i=0;i<b1size;i++)
        b1[i]=0;
     for(i=0;i<a2size;i++)
        a2[i]=0;
     for(i=0;i<b2size;i++)
        b2[i]=0;
     permute1(0);
     permute2(0);
     isort(b1,b1size);
     isort(b2,b2size);
     cout<<compare()<<"\n";
 }

void permute1(int pos)
{
    int i,j;
    if(pos==10)//10=a1size
    {
        for(i=0;i<a1size && a1[i]==0;i++);
        for(j=i;j<a1size;j++)
            b1[b1count]+=a1[j]*(pow(2,19-j-i) + pow(2,j-i));//19=2*a1size-1,2=base1
        b1count++;
        for(j=i;j<a1size-1;j++)
            b1[b1count]+=a1[j]*(pow(2,18-j-i) + pow(2,j-i));//18=2*a1size-2,2=base1
        b1[b1count++]+=a1[j]*pow(2,j-i);//2=base1
        return;
    }
    for(i=1;i>=0;i--)//i=base1-1
    {
        a1[pos]=i;
        permute1(pos+1);
    }
}
void permute2(int pos)
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
        permute2(pos+1);
    }
    return;
}
int compare()
{
    int i,j,sum=0;
    cout<<"The Double base palindromes are: ";
    for(i=0,j=0;i<b1size && j< b2size ;)
    {
        if(b1[i]<b2[j])
            j++;
        else if (b1[i]>b2[j])
            i++;
        else
            {
            cout<<b1[i]<<" ";
            sum+=b1[i];
            i++;j++;
            }
    }
    cout<<"\nTheir sum is : ";
    return(sum);
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
