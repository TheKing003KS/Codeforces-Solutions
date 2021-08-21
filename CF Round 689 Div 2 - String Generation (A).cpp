// Problem Link: https://codeforces.com/contest/1461/problem/A

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
        int n, k;
        cin >> n >> k;
        string ans;
        int ctr = 0;
        for(int i = 0; i < n; i++)
        {
            ans += ('a'+ctr);
            ctr++;
            if(ctr == 3) {ctr = 0;}
        }
        cout << ans;
        cout << "\n";
    }
    
    return 0;
}