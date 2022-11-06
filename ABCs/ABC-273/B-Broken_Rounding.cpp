/**
 * @author xavierbeast68
 * AVOIDING COMPLEXITY, REDUCES BUGS.
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
/*--Loop Macros--*/
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORL(i,a,b) for(int i = a; i <= b; i++)
#define FORR(i,a,b) for(int i = a; i >= b; i--)
/*--Vector Macros--*/
#define pb push_back
#define ppb pop_back
/*--Print Macros--*/
#define print(x) (cout<<(x))
#define println(x) (cout<<(x)<<endl)

/*----------------------------------------Functions----------------------------------------*/

ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll lcm(ll a, ll b) {return a / gcd(a, b) * b;}
ll max(ll a, ll b) {return a > b ? a : b;}
ll min(ll a, ll b) {return a < b ? a : b;}
ll countDigit(ll n) {return (floor(log10(n) + 1));}

/*-----------------------------------||| Here We Go!!! |||-----------------------------------*/

void solve()
{
	/*--Let's Code--*/
	int n, k; cin >> n >> k;
	int l = countDigit(n);
	if (l < k)
	{
		println(0);
	}
	else if (l == k)
	{
		string str = "";
		str.insert(0, l, '0');
		str = '1' + str;
		println(str);
	}
	else
	{
		string str = to_string(n);
		str.resize(l - k);
		int x = str[l - k - 1] + 1;
		str[l - k - 1] = char(x);
		string str1 = "";
		str1.insert(0, k, '0');
		str.append(str1);
		println(str);
	}
}

signed main()
{
	fastio;

	int t = 1;
	//cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}