#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n=5;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<=i;j++)
    {
      cout<<"*";
    }
    cout<<"\n";
  }

  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      cout<<"*";
    }
    cout<<"\n";
  }

  return 0;
}