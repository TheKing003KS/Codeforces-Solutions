// Problem Link: https://codeforces.com/contest/1554/problem/A

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
 
#define ll long long int
#define ull unsigned long long int
#define modulo 1000000007
#define mp make_pair
#define pb push_back

int main()
{   
    ll tests;
    cin >> tests;
    while(tests--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for(ll i = 0; i < n; i++) {cin >> arr[i];}
        
        ll ans = arr[0]*arr[1];
        for(int i = 1; i < n-1; i++)
        {
            ans = max(ans,arr[i]*arr[i+1]);
        }
        cout << ans;

        cout << "\n";
    }
    
    return 0;
}