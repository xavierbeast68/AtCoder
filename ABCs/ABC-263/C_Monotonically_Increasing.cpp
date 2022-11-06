// ! https://atcoder.jp/contests/abc263/tasks/abc263_c

// tags: DP, Vectors, Recursion,2-D array

/* Editorial=>
Let S 
N,M be the set of integer sequences of length N consisting of integers between 1 and N.
First, if N=1, then S(N,M)=({1},{2},…,{M}).
Now let N≥2. We enumerate the last term of the integer sequences in S(N,M).
If the last term is K, then the set of possible first (N−1) terms equals S(N−1,K−1). Here, note that N−1≤K−1.
Therefore, we can find S(N,M) by iterating K and adding the elements of S(N−1,K−1) appending K to each of its element.
Therefore, the problem has been solved.
Alternatively, in C++, we can prepare a vector consisting of M zeros and (N−M) ones in this order, and use next_permutation to output the indices of zero-valued elements in each iteration. The implementation of this solution is simpler.
*/
//* Sample Code(C++)=>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> dp[10][10];
void solve(int n,int m){
  if(dp[n][m].size()) return;
  if(n==1){
    for(int i=1;i<=m;i++){
      dp[n][m].push_back({i});
    }
  }
  else{
    for(int k=1;k<=m;k++){
      if(n-1<=k-1){
        solve(n-1,k-1);
        for(int i=0;i<dp[n-1][k-1].size();i++){
          vector<int> a=dp[n-1][k-1][i];
          a.push_back(k);
          dp[n][m].push_back(a);
        }
      }
    }
  }
}
int main() {
  int n,m;
  cin>>n>>m;
  solve(n,m);
  sort(dp[n][m].begin(),dp[n][m].end());
  for(int i=0;i<dp[n][m].size();i++){
    for(int j=0;j<n;j++) cout<<dp[n][m][i][j]<<" ";
    cout<<endl;
  }
}

//* Sample code (next_permutation,C++)=>
/*
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,m;
  cin>>n>>m;
  vector<int> a;
  for(int i=0;i<n;i++) a.push_back(0);
  for(int i=0;i<m-n;i++) a.push_back(1);
  do{
    for(int i=0;i<m;i++){
      if(a[i]==0) cout<<i+1<<" ";
    }
    cout<<endl;
  }while(next_permutation(a.begin(),a.end()));
}
*/

//* You can simply use the combinations function in Python’s standard library, which outputs all N-element subsets of a M-element set, in lexicographical order.
/*
from itertools import combinations

n, m = list(map(int, input().split()))
for l in combinations(range(1, m + 1), n):
    print(*l, sep=' ')

*/