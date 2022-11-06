/**
 * @author xavierbeast68
 * ? Problem From : Atcoder ABC-268
 * @file C_Chinese_Restaurant.cpp
 * @date 15-09-2022
 * Even a low class warrior can surpass an elite with enough hardwork.
 */

// https://atcoder.jp/contests/abc268/tasks/abc268_c

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define print(a) (cout<<(a)<<endl)
typedef long long ll;
typedef long double ld;

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

/*------------------------------------------------------------------------------------------------------------------------------------------*/



void solve()
{
	/*--Let's Code--*/
	/* * What is a mod m?
	-For an integer a and a positive integer m, a mod m denotes the integer x between 0 and (m−1) (inclusive) such that (a−x) is a multiple of m.
	-(It can be proved that such x is unique.) . For (a % m)>=0 (+ve), a mod m is equal to (a%m) , but for (a % m)<0 (-ve), a mod m is equal to (m+(a%m))
	-in this way we can go in a circular array format
	*/
	//! TLE (O(n^2) soln)
	/*
	//! TLE (o(n^2) soln)
	int n; cin >> n;
	vector <int> a(n);
	FOR(i, 0, n)
	{
		cin >> a[i];
	}
	int max = 0, j = n;
	while (max < n && j > 0)
	{
		int count = 0;
		FOR(i, 0, n)
		{
			int x = ((i - 1) % n) < 0 ? (n - 1) : ((i - 1) % n);
			if ((a[i] == i) || (a[(i + 1) % n] == i) || (a[x] == i))
			{
				count++;
			}
		}
		if (max < count)
		{
			max = count;
		}
		int l = a[n - 1];
		FORR(i, n - 1, 1)
		{
			a[i] = a[i - 1];
		}
		a[0] = l;
		j--;
	}
	cout << max << endl;
	*/

	/* * Optimized approach (O(n))
	* ! (N-(i-j)+(k-1))
	* j=p[i]; p[i] is dish of jth person cureently infront of the person i
	* and k=0,1,2... k is (j-1)th, jth and (j+1)th person
	* remember, the sitting is counterclockwise and rotation of dishes is also counterclockwise (dish of (n-1)th will rotate to 0th person, 0th to 1st and so on)
	* and maximum (N-1) rotations are needed to cover all possibilities.
	*/
	int N; cin >> N;
	vector <int> p(N);
	FOR(i, 0, N) cin >> p[i];
	vector <int> cnt(N, 0); // cnt holds the number of happy peoples resulting in performing the operation 0,1,2...N-1 times.
	FOR(i, 0, N)
	{
		int j = p[i]; // j stores the dish of p[i]th person that is in front of ith person
		FOR(k, 0, 3) // for the person p[i]th to be happy, the dish in front of ith person should be rotated y times to get in front of ((i-1)mod N)th or ith or ((i+1)mod N)th person.
		{
			/* * Explanation
			Let N=7, for i=0 that is the 0th person, assume p[i]=5 means oth person has dish of 5th person,
			so to let the 5th person happy, dish from oth must be rotated and put in front of either 4th, 5th or 6th person,
			to do so, we must rotate it by j-i-1, j-i, j-i+1, but for j<i this don't work as number of rotaion can only be 0 to N-1 and can't be negative,
			so more appropriately (N+j-i-1),(N+j-i),(N+j-i+1) but for a person like 0, we have to consider (N-1)th,0th,1st..
			so keeping in range of 0 to (N-1) we get ((N-(i-j)+(k-1))%N); k=0,1,2
			*/
			int y = (N - i + j + k - 1) % N; // y stores number of rotations required
			cnt[y]++; // updates number of happy people in y rotations
		}
	}
	int ans = 0;
	FOR(i, 0, N)
	{
		ans = Max2(ans, cnt[i]);
	}
	print(ans);
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