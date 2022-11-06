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
	string s; cin >> s;
	int x = s.find_last_of('a');
	if (x != -1) cout << x + 1 << endl;
	else cout << -1 << endl;
}

/*--Execution Time--*/
void execTime() {cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;}

signed main()
{
	clock_t begin = clock();
	fastio;

	int t = 1;
	//cin >> t;
	while (t--)
	{
		solve();
	}

	clock_t end = clock();
	cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC << " secs" << endl;

	execTime();

	return 0;
}
