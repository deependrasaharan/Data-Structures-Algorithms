#include<bits/stdc++.h>
using namespace std;
int main()
{
  // int n=26;
  // char ch='A'+n-1;
  // for(int i=0;i<n;i++)
  // {
  //   char temp=ch-i;
  //   for(int j=0;j<=i;j++)
  //   {
  //     cout<<temp;
  //     temp++;
  //   }
  //   cout<<"\n";
  // }

  // return 0;

  int n=26;
  for(int i=0;i<n;i++)
  {
    for(char ch='A'+n-i-1;ch<'A'+n;ch++)
    {
      cout<<ch;
    }
    cout<<"\n";
  }

}