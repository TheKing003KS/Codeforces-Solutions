// Problem Link: https://codeforces.com/contest/1478/problem/A

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
        vector<ll int> arr(n);
        for(auto i = 0; i < n; i++) {cin >> arr[i];}

        int colors = 1;
        for(int i = 0; i < n-1; i++)
        {
            if(arr[i] == arr[i+1])
            {
                int repeat = 1;
                int temp = i;
                while(temp < n-1 && arr[temp] == arr[temp+1])
                {
                    temp++;
                    repeat++;
                }
                colors = max(colors,repeat);
                i = temp;
            }
        }
        cout << colors << "\n";
    }
    
    return 0;
}