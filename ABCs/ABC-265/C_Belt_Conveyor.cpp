// * C-Belt Conveyor
/*
! https://atcoder.jp/contests/abc265/tasks/abc265_c

Time Limit: 2 sec / Memory Limit: 1024 MB
Score : 300 points

!! Problem Statement
We have a grid with H horizontal rows and W vertical columns. (i,j) denotes the square at the i-th row from the top and j-th column from the left. (i,j) has a character Gi,j written on it. Gi,j is U, D, L, or R.

You are initially at (1,1). You repeat the following operation until you cannot make a move.

Let (i,j) be the square you are currently at.
If Gi,j is U and i!=1, move to (i−1,j).
If Gi,j is D and i!=H, move to (i+1,j).
If Gi,j is L and j!=1, move to (i,j−1).
If Gi,j is R and j!=W, move to (i,j+1).
Otherwise, you cannot make a move.

Print the square you end up at when you cannot make a move.
If you indefinitely repeat moving, print -1 instead.

Constraints
1≤H,W≤500
Gi,j is U, D, L, or R.
H and W are integers.

Input:                      Output: if you end up at (i,j), print i j
H W
G1,1 G1,2 ..... G1,W
G2,1 G2,2 ..... G2,W
.
.
.
GH,1 GH,1 ..... GH,W

Sample Input 1:             Sample Output 1: 
2 3                         1 3
RDU
LRU

Sample Input 2:             Sample Output 2: 
2 3                         -1
RRD
ULL

Sample Input 3:                                 Sample Output 3:
9 44                                            9 5
RRDDDDRRRDDDRRRRRRDDDRDDDDRDDRDDDDDDRRDRRRRR
RRRDLRDRDLLLLRDRRLLLDDRDLLLRDDDLLLDRRLLLLLDD
DRDLRLDRDLRDRLDRLRDDLDDLRDRLDRLDDRLRRLRRRDRR
DDLRRDLDDLDDRLDDLDRDDRDDDDRLRRLRDDRRRLDRDRDD
RDLRRDLRDLLLLRRDLRDRRDRRRDLRDDLLLLDDDLLLLRDR
RDLLLLLRDLRDRLDDLDDRDRRDRLDRRRLDDDLDDDRDDLDR
RDLRRDLDDLRDRLRDLDDDLDDRLDRDRDLDRDLDDLRRDLRR
RDLDRRLDRLLLLDRDRLLLRDDLLLLLRDRLLLRRRRLLLDDR
RRRRDRDDRRRDDRDDDRRRDRDRDRDRRRRRRDDDRDDDDRRR


*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int t=1;
    //cin>>t;
    while(t--)
    {
        int h,w;
        cin>>h>>w;
        vector<string> a(H);

    }

    //cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

}