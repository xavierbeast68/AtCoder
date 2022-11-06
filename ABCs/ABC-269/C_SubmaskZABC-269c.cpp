/**
 * @author xavierbeast68
 * ? Problem From : Atcoder Beginner Contest-269
 * @file C_SubmaskZABC-269c.cpp
 * @date 17-09-2022
 * AVOIDING COMPLEXITY, REDUCES BUGS.
 */

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define print(a) (cout<<(a)<<endl)
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;

/*--Loop Macros--*/
#define FOR(i,a,b) for (ll i = a; i < b; i++)
#define FORL(i,a,b) for (int i = a; i <= b; ++i)
#define FORR(i,a,b) for (int i = a; i >= b; --i)
/*--Minimum-Maximum Macros--*/
#define Min2(a,b) (a<b?a:b)
#define Max2(a,b) (a>b?a:b)
/*--Vector Macros--*/
#define pb push_back
#define ppb pop_back

/*--Execution Time--*/
#define execTime() (cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl)
/*--Debug--*/
#define debug(i) (cout<<"<==Testing(#"<<i<<")==>"<<endl)
/*--InputOutputError_From/To_File*/
void IOE()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	/*freopen("error.txt", "w", stderr);*/
#endif
}

/*------------------------------||| Here We Go!!! |||------------------------------*/

void solve()
{
	ll n; cin >> n;
	if (n == 0)
	{
		print(0);
		return;
	}
	ll i = 0;
	vector <ll> a;
	while (i <= (n / 2))
	{
		ll y = ((i ^ n) + i) % n;
		if (y == 0)
		{
			a.pb(i);
			a.pb(n - i);
		}
		i++;
	}
	sort(a.begin(), a.end());
	FOR(i, 0, a.size())
	{
		print(a[i]);
	}
}
/*
void rec(ll ii, ll jj, ll x)
{
	if(ii>jj)
	{
		return;
	}
	else
	{
		ll y=((ii^x)+ii)%x;
		if(y==0)
		{
			print(ii);
			rec(ii+1,jj-1, x);
			print(jj);
		}
		else
		{
			rec(ii+1,jj-1,x);
		}
	}
}
void solve()
{
	ll N;cin>>N;
	if(N==0)
	{
		print(N);
		return;
	}
	ll i=0,j=N;
	rec(i,j,N);
}
*/

/*
void rec(ll ii, ll x)
{
	if(ii>(x/2))
	{
		return;
	}
	else
	{
		ll y=((ii^x)+ii)%x;
		if(y==0)
		{
			print(ii);
			rec(ii+1,x);
			print(ii^x);
		}
		else
		{
			rec(ii+1,x);
		}
	}
}
void solve()
{
	ll N; cin >> N;
	rec(0, N);
}
*/
/*
void solve()
{
	ll N; cin >> N;
	FOR(i, 0, N + 1)
	{
		ll ans = i ^ N;
		ll div = (ans + i) % N;
		if (div == 0)
		{
			print(i);
		}
	}
}
*/
signed main()
{
	boost;
	//IOE();

	/*t=1: default value for single test case*/
	int t = 1;
	//cin >> t;
	while (t--)
	{
		//debug();
		solve();
	}

	//execTime();
	return 0;
}

/**
 * check t: comment cin>>t; for single test case
 * if using CPH Judge or CppFastOlympicsCoding: no need to use IOE;
 */