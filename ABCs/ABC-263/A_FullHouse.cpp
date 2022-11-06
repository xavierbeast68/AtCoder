//! https://atcoder.jp/contests/abc263/tasks/abc263_a

//* Editorial
/*
If you are new to learning programming and do not know where to start, please try Problem A “Welcome to AtCoder” from practice contest. There you can find a sample code for each language.
Also, if you are not familiar with problems in programming contests, we recommend you to try some problems in //* “AtCoder Beginners Selection” (https://atcoder.jp/contests/abs).
「競プロ典型 90 問」//* (Typical 90 Problems of Competitive Programming) (https://atcoder.jp/contests/typical90) is a collection of typical 90 competitive programming problems; unfortunately, currently the problem statements are all Japanese.
「C++入門 //* AtCoder Programming Guide for beginners (APG4b)」(https://atcoder.jp/contests/APG4b) is a C++ tutorial for competitive programmers. Sadly, this is only in Japanese too.

This problem is a difficult version of ABC260-A. If you haven’t solved ABC260-A, we recommend you solving it first.

Just as ABC260-A, we may count the occurrences of each integer and check if some number occurs three times and another occurs twice. If such numbers exist, the answer is Yes.

Let us introduce another solution.

Regard the input as a sequence of length 5 and sort it in ascending order. (Let A be this sequence.)

Depending on which of the numbers occurring twice and three times is larger, the set is Full House if and only if one of the following holds:

A[0]=A[2] and A[3]=A[4]

A[0]=A[1] and A[2]=A[4]

We may implement this using arrays, sort, and conditional branches. If you don’t come up with an implementation, see also the sample code.

Sample code (C++):
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a(5);
    for(int i = 0; i < 5; i++) cin >> a[i];
    sort(a.begin(), a.end());
    if((a[0] == a[2] and a[3] == a[4]) or (a[0] == a[1] and a[2] == a[4])) cout << "Yes" << endl;
    else cout << "No" << endl;
}

/*
*Sample code (Python):

a = list(map(int, input().split()))
a.sort()
if (a[0] == a[2] and a[3] == a[4]) or (a[0] == a[1] and a[2] == a[4]):
    print("Yes")
else:
    print("No")

*/

/*
//* Submission #33801368

#include <bits/stdc++.h>
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
using namespace std;
using ll = int64_t;
!!!!!!!!!!!!!!!!!!!
int main() {
	ll a[5];
	ll k=0;
	for(ll i=0;i<5;i++){
		cin >> a[i];
		for(ll j=0;j<i;j++){
			if(a[i]==a[j]) k++;
		}
	}
	if(k==4){
		cout << "Yes" << endl;
	}
	else cout << "No" << endl;
	return 0;
}

//* Submission #33801533
#include<stdio.h>
#include<algorithm>
 
int a[7];
 
int main() {
    for (int i=1; i<=5; ++i)
        scanf("%d",a+i);
    std::sort(a+1,a+6);
    if (a[1]!=a[2]||a[4]!=a[5]) puts("No");
    else if (a[3]!=a[2]&&a[3]!=a[4]) puts("No");
    else puts("Yes");
    return 0;
}
*/