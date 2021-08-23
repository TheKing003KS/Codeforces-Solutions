// Problem Link: https://codeforces.com/contest/1530/problem/B

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

bool is_valid(int n, int m, int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < m);
}

int main()
{   
    ll int tests;
    cin >> tests;
    while(tests--)
    {
        int h, w;
        cin >> h >> w;

        if(w == 1)
        {
            bool flag = true;
            while(h > 0)
            {
                if(flag) {cout << 1 << "\n"; flag = false;}
                else {cout << 0 << "\n"; flag = true;}
                h--;
            }
        }
        else if(w == 2)
        {
            bool flag = true;
            while(h > 0)
            {
                if(flag) {cout << 1 << 0 << "\n"; flag = false;}
                else {cout << 0 << 0 << "\n"; flag = true;}
                h--;
            }
        }
        else
        {
            vector<vector<int>> ans(h,vector<int>(w,0));
            for(int j = 0; j < w; j += 2)
            {
                ans[0][j] = 1;
                ans[h-1][j] = 1;
            }
            if(h >= 5)
            {
                int i = 2;
                while(i <= h-3)
                {
                    ans[i][0] = 1;
                    ans[i][w-1] = 1;
                    i += 2;
                }
            }
            for(int i = 0; i < h; i++)
            {
                for(int j = 0; j < w; j++)
                {
                    cout << ans[i][j];
                }
                cout << "\n";
            }
        }

        cout << "\n";
    }
    
    return 0;
}