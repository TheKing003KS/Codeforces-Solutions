// Problem Link: https://codeforces.com/contest/1530/problem/C

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

bool is_valid(int n, int m, int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}

int main()
{   
    ll int tests;
    cin >> tests;
    while(tests--)
    {
        ll int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(auto i = 0; i < n; i++) {cin >> a[i];}
        for(auto i = 0; i < n; i++) {cin >> b[i];}
        sort(begin(a),end(a),greater<int>());
        sort(begin(b),end(b),greater<int>());

        int stages = n - (n/4);
        ll int mysum = 0, tarsum = 0;
        int i = 0, j = 0;
        for(; i < stages; i++, j++)
        {
            mysum += a[i];
            tarsum += b[j];
        }
        if(mysum > tarsum) {cout << 0 << "\n"; continue;}
        i--;
        j--;

        int ctr = n%4;
        int ans = 0;
        while(mysum < tarsum)
        {
            if(ctr < 3)
            {
                mysum += 100;
                if(j < n-1) {j++; tarsum += b[j];}
                ctr++;
            }
            else if(ctr == 3)
            {
                if(i >= 0)
                {
                    mysum -= a[i];
                    i--;
                    mysum += 100;
                }
                ctr = 0;
            }
            ans++;
        }
        cout << ans;

        cout << "\n";
    }
    
    return 0;
}