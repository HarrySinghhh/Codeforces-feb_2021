// Time for the Linked-List
 
 
 
#include<bits/stdc++.h>
#define int long long 
#define io ios_base::sync_with_stdio(false),cin.tie(nullptr);
#define ipair pair<int,int>
#define pb push_back
 
#define f(i, n) for(int i=0;i<n;i++)
#define F(i, n) for(int i=1;i<=n;i++)
#define all(v) v.begin(),v.end()
#define tr cout<<"\n"
#define br break
#define mod 998244353
#define inf 1000000000000009
 
using namespace std;
const int maxn=100005;
int lowbit(long long x) { return x & -x; }//that means if we have 10100 it will return 2^2=4;

void Not_Stable()
{
 int a,b;
 cin>>a>>b;
 int count=0;
 int aa=0,bb=0;
 if(a<b)swap(a,b);
 for(int i=1;i<=1000000;i++)
 {
 if( a && b)
 {
 	if(i%2==1)--a,count++;
 	else --b,count++;
 }
 else break;
 }

 if(a)
 {
     count+=(a*2-1);
 }
 else if(b)

 {
 	count+=(b*2-1);

 }



 cout<<count;
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