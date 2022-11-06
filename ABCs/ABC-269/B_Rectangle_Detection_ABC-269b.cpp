/**
 * @author xavierbeast68
 * ? Problem From : Atcoder Beginner Contest-269
 * @file B_Rectangle_Detection_ABC-269b.cpp
 * @date 17-09-2022
 * AVOIDING COMPLEXITY, REDUCES BUGS.
 */

/*
https://www.codevscolor.com/c-plus-plus-find-last-index-character-in-string
https://www.geeksforgeeks.org/array-of-strings-in-cpp-5-different-ways-to-create/
https://www.techiedelight.com/find-index-of-a-character-in-string-in-cpp/
https://www.geeksforgeeks.org/string-find-in-cpp/#:~:text=String%20find%20is%20used%20to,of%20starting%20position%20is%200.
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
#define FOR(i,a,b) for (int i = a; i < b; i++)
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
	/*--Let's Code--*/
	vector <string> str;
	FOR(i, 0, 10)
	{
		string x; cin >> x;
		str.pb(x);
	}
	char ch = '#';
	int a = 11, b = -1, c = 11, d = -1;
	FOR(i, 0, 10)
	{
		int x = str[i].find(ch);
		int lx = str[i].find_last_of(ch);
		if (x != -1 && i < a)
		{
			a = i;
		}
		if (x != -1 && i > b)
		{
			b = i;
		}
		if (x != -1 && x < c)
		{
			c = x;
		}
		if (lx != -1 && lx > d)
		{
			d = lx;
		}
	}
	cout << (a + 1) << " " << (b + 1) << endl;
	cout << (c + 1) << " " << (d + 1) << endl;
}

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