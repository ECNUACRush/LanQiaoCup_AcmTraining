#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[10001];
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int j=2;j<=n-1;j++)
    {
      for(int k=1;k<=n-2;k++)
      {
          if(a[j]>a[k]&&j>k)
          {
              for(int q=3;q<=n;q++)
              {
                  if(j<q&&a[j]<a[q])
                  {
                     ans++;
                     break;
                  }
              }
          }
          break;
      }
    }
    cout<<ans<<endl;
}