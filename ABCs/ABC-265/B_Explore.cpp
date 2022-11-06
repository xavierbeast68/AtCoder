// * B-Explore
/*
! https://atcoder.jp/contests/abc265/tasks/abc265_b

Time Limit: 2 sec / Memory Limit: 1024 MB
Score : 200 points

? Problem Statement
Takahashi is exploring a cave in a video game.

The cave consists of N rooms arranged in a row. The rooms are numbered Room 1,2,…,N from the entrance.

Takahashi is initially in Room 1, and the time limit is T.
For each 1≤i≤N−1, he may consume a time of Ai to move from Room i to Room (i+1). There is no other way to move between rooms. He cannot make a move that makes the time limit 0 or less.

There are M bonus rooms in the cave. The i-th bonus room is Room Xi ; when he arrives at the room, the time limit increases by Yi.

Can Takahashi reach Room N?

Constraints
2≤N≤10^5
0≤M≤N−2
1≤T≤10 ^9
1≤Ai≤10^9
1<X1<…<XM<N
1≤Yi≤10^9
All values in input are integers.

Input:
N M T
A1 A2 A3 .... A(N-1)
X1 Y1
X2 Y2 ..AND SO ON TILL XM YM

OUTPUT: If Takahashi can reach Room N, print Yes; otherwise, print No.

Sample Input 1:     Sample Output 1:
4 1 10              Yes
5 7 5
2 10

Explanation:Takahashi is initially in Room 1, and the time limit is 10.
            He consumes a time of 5 to move to Room 2. Now the time limit is 5. Then, the time limit increases by 10; it is now 15.
            He consumes a time of 7 to move to Room 3. Now the time limit is 8.
            He consumes a time of 5 to move to Room 4. Now the time limit is 3.

Sample Input 2:     Sample Output 2:
4 1 10              No
10 7 5
2 10
He cannot move from Room 1 to Room 2.

*/

/*
*My solution- Wrong Answer- Failed in Few Test Cases
#include <bits/stdc++.h>
using namespace std;
#define FOR(a,c) for(long long (a)=0;(a)<(c); (a)++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    //int t=1;
    //cin>>t;
    //while(t--)
    //{
        long long N,M,T;
        cin>>N>>M>>T;
        int A[N-1];
        FOR(i,N-1)
        {
            cin>>A[i];
        }

        int X[M],Y[M]; 
        FOR(i,M)
        {
            cin>>X[i]>>Y[i];
        }

        FOR(i, N-1)
        {
            if(T<=0)
            {
                break;
            }
            long long j=0;
            while((i+1)<X[j])
            {
                j++;
            }

            if(X[j]==(i+1))
            {
                T=T-A[i]+Y[j];
            }
            else
            {
                T=T-A[i];
            }
        }
        if(T<=0)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    //}

    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
}
*/

// !Optimized Code=>
// ** Editorial solution
/* 
todo important links of this question->
 *  Editorial - https://atcoder.jp/contests/abc265/submissions/34112251
 *C=>
    #include<stdio.h>
    
    int a[100010];
    int bonus[100010];
    int main(){
    	int n,m;
    	long long t;
    	scanf("%d%d%lld",&n,&m,&t);
    	for(int i=1;i<n;i++)scanf("%d",a+i);
    	for(int i=0;i<m;i++){
    		int x,y;
    		scanf("%d%d",&x,&y);
    		bonus[x]=y;
    	}
    
    	// i -> i+1
    	for(int i=1;i<n;i++){
    		if(t<=a[i]){
    			puts("No");
    			return 0;
    		}
    		t-=a[i];
    		t+=bonus[i+1];
    	}
    
    	puts("Yes");
    }

 *  Youtube Solutions - >
  !  https://www.youtube.com/watch?v=2kt3pHZWvv4&ab_channel=AtCoderLive
  !  https://www.youtube.com/watch?v=vMxw9enW18Q&ab_channel=PuzzlingClarity

  //** also checkout other submissions and discussion forum
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

    int N,M; long long T;
    cin>>N>>M>>T;
    vector<int> a(N-1);
    for(int i=1;i<N;i++) 
    {
        cin>>a[i];
    }
    vector<int> b(N);
    for(int i=0;i<M;i++)
    {
        int x,y;
        cin>>x>>y;
        b[x]=y;
    }

    for (int i = 1; i < N ; i++)
    {
        T-=a[i];
        T+=b[i];
        if(T<=0)
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    return 0 ;
}