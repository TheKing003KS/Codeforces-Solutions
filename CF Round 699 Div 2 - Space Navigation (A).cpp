// Problem Link: https://codeforces.com/contest/1481/problem/A

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

int main()
{   
    ll int tests;
    cin >> tests;
    while(tests--)
    {
        ll int a, b;
        cin >> a >> b;
        string str;
        cin >> str;
        
        char ch1, ch2;
        if(a > 0) {ch1 = 'R';}
        else {ch1 = 'L'; a = -a;}
        if(b > 0) {ch2 = 'U';}
        else {ch2 = 'D'; b = -b;}

        for(int i = 0; i < str.length(); i++)
        {
            if(a > 0 && str[i] == ch1) {a--;}
            else if(b > 0 && str[i] == ch2) {b--;}

            if(a == 0 && b == 0) {break;}
        }
        if(a == 0 && b == 0) {cout << "YES\n";}
        else {cout << "NO\n";}
    }
    
    return 0;
}