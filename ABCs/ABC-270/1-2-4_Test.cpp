/**
 * @author xavierbeast68
 * ? Problem From : Atcoder Beginner Contest-270
 * @name : 1-2-4 Test
 * @date : 29-09-2022
 * @link : https://atcoder.jp/contests/abc270/tasks/abc270_a
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

void points(int c, vector <int> &d)
{
	if (c == 1)
	{
		d[c] = 1;
	}
	else if (c == 2)
	{
		d[c] = 1;
	}
	else if (c == 3)
	{
		d[1] = 1;
		d[2] = 1;
	}
	else if (c == 4)
	{
		d[4] = 1;
	}
	else if (c == 5)
	{
		d[1] = 1;
		d[4] = 1;
	}
	else if (c == 6)
	{
		d[2] = 1;
		d[4] = 1;
	}
	else if (c == 7)
	{
		d[1] = 1;
		d[2] = 1;
		d[4] = 1;
	}
}
void solve()
{
	/*--Let's Code--*/
	int a, b; cin >> a >> b;
	vector <int> a1(5), b1(5), c(5);
	points(a, a1);
	points(b, b1);
	int point = 0;
	FOR(i, 1, 5)
	{
		if (a1[i] == 1 || b1[i] == 1)
		{
			c[i] = 1;
			point += i;
		}
	}
	print(point);
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

//* Editorial soln using bitwise or (|) operator = >
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin>>a>>b;
	cout<<(a|b)<<endl;
	return 0;
}
*/