// Problem Link: https://codeforces.com/contest/1476/problem/A

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
        ll int n, k;
        cin >> n >> k;
        
        if(n == k) {cout << 1 << "\n";}
        else if(n < k)
        {
            //cout << ceil(float(k)/float(n)) << "\n";
            if(k%n == 0) {cout << k/n << "\n";}
            else {cout << (k/n)+1 << "\n";}
        }
        else
        {
            if(n%k == 0) {cout << 1 << "\n";}
            else {cout << 2 << "\n";}
        }
    }
    
    return 0;
}