#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n=5;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<(n-1-i);j++)
    {
      cout<<" ";
    }
    for(int k=0;k<2*i+1;k++)
    {
      cout<<"*";
    }
    cout<<"\n";
  }

  for(int i=0; i<n-1;i++)
  {
    for(int j=0;j<i+1;j++)
    {
      cout<<" ";
    }
    for(int k=0;k<2*(n-i-1)-1;k++)
    {
      cout<<"*";
    }
    cout<<"\n";
  }

  return 0;
}