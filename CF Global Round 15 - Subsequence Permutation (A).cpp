// Problem Link: https://codeforces.com/contest/1552/problem/A

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
        vector<int> tab(26,0);
        for(int i = 0; i < n; i++)
        {
            tab[str[i]-'a']++;
        }
        string temp;
        for(int i = 0; i < 26; i++)
        {
            while(tab[i] > 0)
            {
                temp += ('a'+i);
                tab[i]--;
            }
        }
        int count = 0;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] != temp[i]) {count++;}
        }
        cout << count;

        cout << "\n";
    }
    
    return 0;
}