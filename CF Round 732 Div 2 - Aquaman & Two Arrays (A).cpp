// Problem Link: https://codeforces.com/contest/1546/problem/A

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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(auto i = 0; i < n; i++) {cin >> a[i];}
        for(auto i = 0; i < n; i++) {cin >> b[i];}

        vector<pair<int,int>> inc, dec;
        ll int diff = 0;
        ll int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] > b[i])
            {
                diff -= (a[i]-b[i]);
                dec.pb(mp(i,a[i]-b[i]));
            }
            else if(a[i] < b[i])
            {
                diff += (b[i]-a[i]);
                inc.pb(mp(i,b[i]-a[i]));

                count += (b[i]-a[i]);
            }
        }
        if(diff != 0) {cout << -1; cout << "\n";}
        else
        {
            cout << count << "\n";
            int i = 0, j = 0;
            while(i < inc.size() && j < dec.size())
            {
                cout << dec[j].first+1 << " " << inc[i].first+1 << "\n";
                dec[j].second--;
                inc[i].second--;
                if(dec[j].second == 0) {j++;}
                if(inc[i].second == 0) {i++;}
            }
        }
        
    }
    
    return 0;
}