// Problem Link: https://codeforces.com/contest/1473/problem/A

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
        int n, d;
        cin >> n >> d;
        vector<int> arr(n);
        bool flag = true;
        for(auto i = 0; i < n; i++) 
        {
            cin >> arr[i];
            if(arr[i] > d) {flag = false;}
        }
        if(flag) {cout << "YES\n"; continue;}
        
        sort(begin(arr),end(arr));
        if(arr[0] + arr[1] <= d) {cout << "YES";}
        else {cout << "NO";}
 
        cout << "\n";
    }
    
    return 0;
}