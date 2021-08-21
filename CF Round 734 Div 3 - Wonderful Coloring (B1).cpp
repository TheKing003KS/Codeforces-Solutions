// Problem Link: https://codeforces.com/contest/1551/problem/B1

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
        string str;
        cin >> str;
        sort(begin(str),end(str));

        //unordered_set<char> red, green;
        int count = 0;
        bool flag = true;
        for(int i = 0; i < str.length();)
        {
            if(i+1 < str.length() && str[i+1] == str[i])
            {
                count++;
                // red.insert(str[i]);
                // green.insert(str[i]);
                
                int temp = i+2;
                while(temp < str.length() && str[temp] == str[i]) {temp++;}
                i = temp;
            }
            else if(flag)
            {
                count++;
                //red.insert(str[i]);
                flag = false;
                i++;
            }
            else if(!flag)
            {
                //green.insert(str[i]);
                flag = true;
                i++;
            }
        }
        if(!flag) {count--;}
        cout << count;

        cout << "\n";
    }
    
    return 0;
}