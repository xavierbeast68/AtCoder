//* A-Apple
/*
! https://atcoder.jp/contests/abc265/tasks/abc265_a

Time Limit: 2 sec / Memory Limit: 1024 MB
Score : 100 points

? Problem Statement
A fruit store sells apples.
You may perform the following operations as many times as you want in any order:

Buy one apple for X yen (the currency in Japan).
Buy three apples for Y yen.
How much yen do you need to pay to obtain exactly N apples?

Constraints
1≤X≤Y≤100
1≤N≤100
All values in input are integers.

Input:          Output:
X   Y   N       Print the answer as an integer
10  25  10      85

Buy three apples for 25 yen three times and one apple for 10 yen, and you will obtain exactly 10 apples for a total of 85 yen.
You cannot obtain exactly 10 apples for a lower cost, so the answer is 85 yen.
*/

/*
*My solution- Wrong Answer- Failed in Few Test Cases
#include <bits/stdc++.h>
using namespace std;

int equality(int x, int y)
{
    int a= (3*x)>y?-1:1;
    return a;
}
void solve()
{
    int X,Y,N;
    cin>>X>>Y>>N;
    int eql= equality(X,Y);
    if(N<3 || eql==1)       // Either N<3 or 3X<= Y, yen = NX, no matter odd or even N
    {
        cout<<N*X<<endl;
        return;
    }

    int n= N%2;     // N is odd or even
    int yen=0;
    if(eql==-1)    // 3X>Y (x<=>Y)
    {
        yen=n>0?(N/3*Y):(N/3*Y+X);      // if N is odd then price = N/3*Y, else price = N/3*Y (packets of 3 apples) + X (1 reamining apple), 
        cout<<yen<<endl;
        return;
    }

}

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
        solve();
    }

    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

    return 0;
}
*/

// !Optimized Code=>
// ** Editorial solution

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

    //int t=1;
    //cin>>t;
    //while(t--)
    //{
        int X,Y,N;
        cin>>X>>Y>>N;
        if(X*3>Y)
            cout<<(N/3)*Y + (N%3)*X<<endl;
        else
            cout<<X*N<<endl;
    //}

    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

}