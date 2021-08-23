// Problem Link: https://codeforces.com/contest/1550/problem/B

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
        int n, a, b;
        cin >> n >> a >> b;
        string str;
        cin >> str;

        if(b >= 0)
        {
            cout << n*(a+b);
        }
        else
        {
            int temp = 0;
            for(int i = 0; i < str.length(); i++)
            {
                if(i < n-1 && str[i] != str[i+1]) {temp++;}
            }
            temp++;
            cout << (n*a)+(b*((temp/2)+1));
        }

        cout << "\n";
    }
    
    return 0;
}