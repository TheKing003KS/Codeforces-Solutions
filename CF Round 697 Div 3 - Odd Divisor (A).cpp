// Problem Link: https://codeforces.com/contest/1475/problem/A

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

bool is_even(ll int n) {return (n%2 == 0);}
bool is_prime(ll int n)
{
    for(auto i = 2; i*i < n; i++)
    {
        if(n%i == 0) {return false;}
    }
    return true;
}

int main()
{   
    ll int tests;
    cin >> tests;
    while(tests--)
    {
        ll int n;
        cin >> n;
        
        bool flag = true;
        if(n%2 == 0)
        {
            while(n > 1)
            {
                n /= 2;
                if(n > 1 && n%2 != 0) {break;}
            }
            if(n == 1) {flag = false;}
        }
        
        if(flag) {cout << "YES\n";}
        else {cout << "NO\n";}
    }
    
    return 0;
}