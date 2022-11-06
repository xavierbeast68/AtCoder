//! Problem Link- https://atcoder.jp/contests/abc266/tasks/abc266_a

/*
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l = s.length();
    cout << s[l / 2] << endl;
    
    cout << (double)clock() / CLOCKS_PER_SEC<<endl;
}
*/

/*
#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main()
{
    char st[100];
    // fflush(stdin);
    scanf("%s",st);
    int l = strlen(st);
    printf("%c\n",st[l/2]);
    fflush(stdin);
    
    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
}
*/
#include<bits/stdc++.h> 
main()
{
    std::string s;
    std::cin>>s;
    std::cout<<s[s.size()/2];
}