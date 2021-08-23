// Problem Link: https://codeforces.com/contest/1475/problem/B

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
        ll int n;
        cin >> n;
        bool flag = false;
        while(n > 0)
        {
            if(n%2020 == 0 || n%2021 == 0) {flag = true; break;}
            n -= 2021;
        }
        if(flag || n == 0) {cout << "YES";}
        else {cout << "NO";}

        cout << "\n";
    }
    
    return 0;
}