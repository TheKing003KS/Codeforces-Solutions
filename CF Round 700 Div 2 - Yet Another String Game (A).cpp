// Problem Link: https://codeforces.com/contest/1480/problem/A

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
        string str;
        cin >> str;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == 'a') {str[i] = 'b';}
            else {str[i] = 'a';}
            i++;

            if(i < str.length())
            {
                if(str[i] == 'z') {str[i] = 'y';}
                else {str[i] = 'z';}
            }
        }
        cout << str << "\n";
    }
    
    return 0;
}