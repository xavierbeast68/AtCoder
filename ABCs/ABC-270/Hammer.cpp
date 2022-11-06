/**
 * @author xavierbeast68
 * ? Problem From : Atcoder Beginner Contest-270
 * @name : Hammer
 * @date : 29-09-2022
 * @link : https://atcoder.jp/contests/abc270/tasks/abc270_b
 * AVOIDING COMPLEXITY, REDUCES BUGS.
 */

#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,a,b) for(int i = a; i < b; i++)
#define FORL(i,a,b) for(int i = a; i <= b; i++)
#define FORR(i,a,b) for(int i = a; i >= b; i--)
#define print(x) (cout<<(x)<<endl)

void solve()
{
	/*--Let's Code--*/
	int x, y, z; cin >> x >> y >> z;
	if (y <= 0 )
	{
		if (x > y) print(abs(x));
		else
		{
			if (z >= y)
			{
				if (z >= 0) print(2 * z + abs(x));
				else print(abs(x));
			}
			else
			{
				print(-1);
			}
		}
	}
	else
	{
		if (x <= 0) print(abs(x));
		else
		{
			if (x < y) print(abs(x));
			else
			{
				if (z <= y)
				{
					if (z >= 0) print(abs(x));
					else print(abs(2 * z) + x);
				}
				else
				{
					print(-1);
				}
			}
		}
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
