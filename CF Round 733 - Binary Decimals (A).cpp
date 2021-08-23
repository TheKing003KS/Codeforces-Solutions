// Problem Link: https://codeforces.com/contest/1530/problem/A

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
        int maxi = -1;
        while(n > 0)
        {
            maxi = max(maxi,int(n%10));
            n /= 10;
        }
        cout << maxi;

        cout << "\n";
    }
    
    return 0;
}