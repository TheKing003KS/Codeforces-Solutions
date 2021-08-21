// Problem Link: https://codeforces.com/contest/1554/problem/B

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

ll max(ll a, ll b) {if(a > b) {return a;} return b;}

int main()
{   
    ll tests;
    cin >> tests;
    while(tests--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> arr(n);
        for(ll i = 0; i < n; i++) {cin >> arr[i];}
        
        ll ans = LLONG_MIN;
        for(ll i = max(0,n-201); i < n-1; i++)
        {
            for(ll j = i+1; j < n; j++)
            {
                ans = max(ans,((i+1)*(j+1))-k*(arr[i]|arr[j]));
            }
        }
        cout << ans;

        cout << "\n";
    }
    
    return 0;
}