// Problem Link: https://codeforces.com/contest/1473/problem/B

#include<iostream>
#include<limits.h>
#include<math.h>
#include<vector>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<unordered_set>
#include<unordered_map>
#include<algorithm>
using namespace std;
 
#define ll long long
#define ull unsigned long long
#define modulo 1000000007
#define mp make_pair
#define pb push_back
 
bool check(string& str1, string& str2)
{
    string temp = str1 + str1;
    for(int i = 0, j = 0; i < temp.length(); i++, j++)
    {
        if(j == str2.length()) {j = 0;}
        if(temp[i] != str2[j]) {return false;}
    }
    return true;
}

int gcd(int a, int b) 
{
   if (b == 0) {return a;}
   return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a*b)/gcd(a,b);
}
 
int main()
{   
    ll int tests;
    cin >> tests;
    while(tests--)
    {
        string str1, str2;
        cin >> str1 >> str2;
 
        bool flag;
        if(str1.length() > str2.length())
        {
            flag = check(str1,str2);
        }
        else {flag = check(str2,str1);}
 
        if(!flag) {cout << -1;}
        else
        {
            int x = str1.length();
            int y = str2.length();
 
            if(x == y) {cout << str1;}
            else if(x > y)
            {
                if(x%y == 0) {cout << str1;}
                else
                {
                    int temp = lcm(x,y)/x;
                    string ans;
                    while(temp--) {ans += str1;}
                    cout << ans;
                }
            }
            else
            {
                if(y%x == 0) {cout << str2;}
                else
                {
                    int temp = lcm(x,y)/y;
                    string ans;
                    while(temp--) {ans += str2;}
                    cout << ans;
                }
            }
        }
 
        cout << "\n";
    }
    
    return 0;
}