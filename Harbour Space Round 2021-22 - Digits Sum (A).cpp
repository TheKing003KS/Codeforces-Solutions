// Problem Link: https://codeforces.com/contest/1553/problem/A

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
        if(n%10 == 9) {cout << (n/10)+1;}
        else {cout << n/10;}

        cout << "\n";
    }
    
    return 0;
}