// Problem Link: https://codeforces.com/contest/1465/problem/A

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
        int n;
        cin >> n;
        string str;
        cin >> str;
        if(n == 1 && str[0] == ')') {cout << "YES\n"; continue;}
        
        bool bad = false;
        for(int i = 0; i < n; i++)
        {
            if(str[i] == ')')
            {
                int temp = i;
                while(temp < n && str[temp] == ')') {temp++;}
                if(temp == n)
                {
                    if((temp-i) > i) {bad = true;}
                }
            }
        }
        if(bad) {cout << "YES";}
        else {cout << "NO";}

        cout << "\n";
    }
    
    return 0;
}