//! https://atcoder.jp/contests/abc263/tasks/abc263_b

//* Editorial
/*
Consider an array DP of length N that stores “DP[i]= how many generations away from Person i is Person 1?” (DP stands for Dynamic Programming.) Here, the solution is DP[N].

First, DP[1]=0.

Since Person i’s person is Person P i, we have DP[i]=DP[Pi]+1.

We can use the expression above in the order i=2,3,…,N to find DP[i] so that we get DP[N].

The overall time complexity is O(N).

By the way, the problem can be rephrased using the terms of graph theory as follows:

There is a rooted tree with N vertices rooted at Vertex 1. The parent of Vertex i(2≤i≤N) is Vertex Pi, where Pi<i is guaranteed. Find the distance between Vertex 1 and Vertex N.

The rephrased problem statement above leads you to a solution using BFS and DFS.

//*Sample Code (C++)
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=1;i<n;i++){
    cin>>a[i];
    a[i]--;
  }
  vector<int> dp(n);
  for(int i=1;i<n;i++){
    dp[i]=dp[a[i]]+1;
  }
  cout<<dp[n-1]<<endl;
}
*/

//* Submission - #33804442
/*
#include <cstdio>
using namespace std;
const int N = 55;
int dep[N];
int main() {
	int n;
	scanf("%d", &n);
	for (int p, i = 2; i <= n; i++) {
		scanf("%d", &p);
		dep[i] = dep[p] + 1;
	}
	printf("%d", dep[n]);
	return 0;
}
*/

//* Submission - #33808776
/*
//
// Created by song on 2022/8/6.
//
#include<bits/stdc++.h>
 
using namespace std;
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
using i64 = long long;
const i64 inf = 0x3fffffffffffffff;
 
int main() {
  fio;
  i64 N;
  cin >> N;
  vector<i64> P(N + 1);
  for (i64 i = 2; i <= N; i++) {
    cin >> P[i];
  }
  i64 ans = 0;
  i64 cur = N;
  while (cur != 1) {
    ans++;
    cur = P[cur];
  }
  cout << ans << endl;
 
  cerr << "Time : " << (double) clock() / (double) CLOCKS_PER_SEC << "s\n";
  return 0;
}
*/