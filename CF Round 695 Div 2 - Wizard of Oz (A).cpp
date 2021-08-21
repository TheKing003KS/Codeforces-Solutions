// Problem Link: https://codeforces.com/contest/1467/problem/A

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

        if(n == 1) {cout << 9;}
        else if(n == 2) {cout << 98;}
        else
        {
            cout << 989;
            n -= 3;
            int temp = 0;
            while(n > 0)
            {
                cout << temp;
                n--;
                if(temp == 9) {temp = 0;}
                else {temp++;}
            }
        }
 
        cout << "\n";
    }
    
    return 0;
}