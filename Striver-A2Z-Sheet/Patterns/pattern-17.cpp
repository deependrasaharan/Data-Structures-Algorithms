#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n=5;
  // for(int i=0;i<n;i++)
  // {
  //   char start='A';
  //   for(int j=0;j<n-1-i;j++)
  //   {
  //     cout<<" ";
  //   }
  //   for(int k=0;k<=i;k++)
  //   {
  //     cout<<start;
  //     start++;
  //   }
  //   start-=2;
  //   while(start>='A')
  //   {
  //     cout<<start;
  //     start--;
  //   }
  //   cout<<"\n";
  // }

  for(int i=0;i<n;i++)
  {
    char start='A';
    for(int j=0;j<n-i-1;j++)
    {
      cout<<" ";
    }
    for(int k=0;k<(2*i+1);k++)
    {
      cout<<start;
      if(k<i)
      {
        start++;
      }
      else 
      {
        start--;
      }
    }
    cout<<"\n";
  }

  return 0;
}