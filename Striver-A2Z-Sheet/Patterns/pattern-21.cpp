#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n=4;
  // for(int i=0;i<n;i++)
  // {
  //   if(i==0||i==n-1)
  //   {
  //     for(int j=0;j<n;j++)
  //     {
  //       cout<<"*";
  //     }
  //   }
  //   else
  //   {
  //     cout<<"*";
  //     for(int j=0;j<n-2;j++)
  //     {
  //       cout<<" ";
  //     }
  //     cout<<"*";
  //   }
  //   cout<<"\n";
  // }

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(i==0||j==0||i==n-1||j==n-1)
      {
        cout<<"*";
      }
      else
      {
        cout<<" ";
      }
    }
    cout<<"\n";
  }

  return 0;
}