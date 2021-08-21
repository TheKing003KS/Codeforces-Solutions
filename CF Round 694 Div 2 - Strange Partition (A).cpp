// Problem Link: https://codeforces.com/contest/1471/problem/A

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
        ll int n, x;
        cin >> n >> x;
        vector<ll int> arr(n);
        for(auto i = 0; i < n; i++) {cin >> arr[i];}

        ll int maxi = 0;
        ll int mini = 0;
        ll int sum = 0;
        for(auto i = 0; i < n; i++)
        {
            if(arr[i]%x == 0)
            {
                maxi += arr[i]/x;
                mini += arr[i]/x;
            }
            else
            {
                maxi += (arr[i]/x)+1;
                sum += arr[i];
            }
        }
        if(sum == 0) {cout << maxi << " " << maxi;}
        else
        {
            if(sum%x == 0) {mini += sum/x;}
            else {mini += (sum/x)+1;}
            cout << mini << " " << maxi;
        }

        cout << "\n";
    }
    
    return 0;
}