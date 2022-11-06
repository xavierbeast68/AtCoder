//* https://atcoder.jp/contests/abc264/tasks/abc264_a
/*
https://www.w3schools.com/cpp/cpp_strings.asp
https://www.geeksforgeeks.org/stdstring-class-in-c/
https://www.geeksforgeeks.org/substring-in-cpp/
https://www.tutorialspoint.com/cplusplus/cpp_strings.htm
https://www.javatpoint.com/cpp-strings
https://www.programiz.com/cpp-programming/strings
https://www.youtube.com/watch?v=W8hPsBquD6Y&ab_channel=ApnaCollege
https://www.youtube.com/watch?v=abZEVCRYZP8&ab_channel=Luv
https://www.youtube.com/watch?v=Wdjr6uoZ0e0&ab_channel=CodeHelp-byBabbar
https://www.youtube.com/watch?v=TkTgo_7ab0M&ab_channel=ApnaCollege
https://www.youtube.com/watch?v=fltaqGek-oA&ab_channel=CodeWithHarry
*/

/*
! Intro to string inputs using cin & getline() function
include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1,s2,s3;
    getline(cin,s3);
    cout<<s3<<endl;
    cout<<endl;
    cin>>s1>>s2;
    cout<<s1<<"//"<<s2<<endl;
    cout<<endl;
    getline(cin,s3);    // here comes the trouble, it will take Enter of above input as input.
    cout<<s3<<endl;
    return 0;
}
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str="atcoder";
    int L,R;    // L=start, R=end
    cin>>L>>R;
    cout<< str.substr(L-1,(R-L+1))<<endl;
    return 0;
}
