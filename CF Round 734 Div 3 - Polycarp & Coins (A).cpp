// Problem Link: https://codeforces.com/contest/1551/problem/A

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
        if(n == 1) {cout << 1 << " " << 0 << "\n"; continue;}
        if(n == 2) {cout << 0 << " " << 1 << "\n"; continue;}

        ll c1, c2;
        c1 = c2 = n/3;

        if(n%3 == 1) {c1++;}
        else if(n%3 == 2) {c2++;}
        cout << c1 << " " << c2;

        cout << "\n";
    }
    
    return 0;
}