// Time for the Linked-List



#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
#define ss second
#define ff first
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define mod 998244353
#define inf 1000000000000009

using namespace std;
const int maxn=4000005;
int lowbit(long long x) { return x & -x; }//that means if we have 10100 it will return 2^2=4;


void Not_Stable()
{
  int n,m;
  cin>>n>>m;
  int mi=inf;
  int count=0;
  int sum=0;
  int val;
  int cur=-inf;
  F(i,n)F(j,m)
  {
    cin>>val;
    if(val<0)++count;
    mi=min(abs(val),mi);
    sum+=abs(val);
  }


  if(mi==0)cout<<sum;
  else
  {
    if(count%2==0)cout<<sum;
    else cout<<sum-(mi*2);
  }
  tr;

}
int32_t main() {
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
#endif
    io;
    int g;cin>>g;
    while (g--)Not_Stable();
    return 0;
    
}