//11.Largest product in a grid

#include<iostream>
using namespace std;
#define size 20
int main()
{
    int i,j;
    unsigned long long int prod,prod_max=0;
    int a[size][size];

cout<<"Enter the grid\n";
for(i=0;i<size;i++)
  { for(j=0;j<size;j++)
        cin>>a[i][j];
  }

for(i=0;i<size-3;i++)
  { for(j=0;j<size-3;j++)
        {
            prod=a[i][j]*a[i][j+1]*a[i][j+2]*a[i][j+3];
            if(prod>prod_max)
                prod_max=prod;
            prod=a[j][i]*a[j+1][i]*a[j+2][i]*a[j+3][i];
            if(prod>prod_max)
                prod_max=prod;
            prod=a[i][j]*a[i+1][j+1]*a[i+2][j+2]*a[i+3][j+3];
            if(prod>prod_max)
                prod_max=prod;
            prod=a[size-i-1][j]*a[size-i-2][j+1]*a[size-i-3][j+2]*a[size-i-4][j+3];
            if(prod>prod_max)
                prod_max=prod;
        }
  }
  cout<<"\nLargest product of four consecutive elements in the grid is "<<prod_max<<"\n";
}
