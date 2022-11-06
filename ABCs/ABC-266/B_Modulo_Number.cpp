// ! Problem Link- https://atcoder.jp/contests/abc266/tasks/abc266_b
// ! https://cplusplus.com/forum/beginner/14205/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, rem,x,ans;
    cin>>n;
    rem=n%998244353;
    x= rem<0?(998244353+rem):rem;

    cout<<x<<endl;
    
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
}

//* Another soln using cstdio
/*
#include <cstdio>
#define ll long long

int main()
{
    ll n, rem,x;
    scanf("%lld",&n);
    rem=n%998244353;
    x= rem<0?(998244353+rem):rem;

    printf("%lld\n",x);

    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
}
*/

//* Optimised soln=> Submission #34373749
/*
#include<cstdio>
#define ll long long
using namespace std;
const int mod=998244353;
ll n;
int main(){
	scanf("%lld",&n);n=(n%mod+mod)%mod;printf("%lld\n",n); //*
	return 0;
}
*/