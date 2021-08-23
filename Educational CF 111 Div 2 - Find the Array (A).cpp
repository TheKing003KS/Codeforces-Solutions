// Problem Link: https://codeforces.com/contest/1550/problem/A

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
        int sum;
        cin >> sum;
        if(sum == 1) {cout << 1 << "\n"; continue;}

        int temp = 1;
        int size = 0;
        //unordered_set<int> st {};
        while(sum > 0)
        {
            if(temp <= sum)
            {
                //st.insert(temp);
                sum -= temp;
                size++;
                temp += 2;
            }
            else
            {
                sum = 0;
                size++;
            }
        }
        cout << size;

        cout << "\n";
    }
    
    return 0;
}