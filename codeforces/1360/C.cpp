//*******************************By Harry Singh From Phillaur.
#include<bits/stdc++.h>
#define ll long long
#define MAX 1000006
#define MOD 1000000009
using namespace std;
#define INF 1e15
set<ll> primes;
vector<pair<ll,ll>> adj[MAX];
vector<ll> ad[MAX];
///******************************ALL important functions;
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);} 
ll lcm(ll a, ll b)  {  return (a*b)/gcd(a, b);  } 
ll power(ll x,ll y){ ll res = 1;x = x % MOD; if (x == 0) return 0;while (y > 0){if (y & 1)  res = ((res%MOD)*(x%MOD)) % MOD;  y = y>>1; x = ((x%MOD)*(x%MOD)) % MOD;  }  return res;  }  
void Sieve(){ bool prime[MAX+1]; memset(prime, true, sizeof(prime)); for (int p=2; p*p<=MAX; p++) { if (prime[p] == true) {for (int i=p*p; i<=MAX; i += p) prime[i] = false; } } for(int i=2;i<=MAX;i++)if(prime[i]==true)primes.insert(i);} 






void harry()
{
ll n;
cin>>n;
ll a[n+1];
int o=0,e=0;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
	if(a[i]%2==0)e++;
	else o++;
}

if(o%2==0 && e%2==0)
cout<<"YES\n";
else
{
	int f=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(abs(a[i]-a[j])==1){
			f=1;break;}
		}
		if(f==1)break;
	}
	
	
	if(f==1)cout<<"YES\n";
	else cout<<"NO\n";
	
}
	
}









int main()
{
int t;
cin>>t;
while(t--) {harry();}
return 0;
}
