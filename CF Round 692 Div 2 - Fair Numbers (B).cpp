// Problem Link: https://codeforces.com/contest/1465/problem/B

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

bool check(multiset<int>& st, ull n)
{
    for(auto it = st.begin(); it != st.end(); it++)
    {
        if(n%(*it) != 0) {return false;}
    }
    return true;
}
void update(multiset<int>& st, ull& n)
{
    if(n%10 != 9)
    {
        int count = st.count(n%10);
        st.erase(n%10);
        if(count > 1)
        {
            --count;
            while(count > 0) {st.insert(n%10); count--;}
        }
        n++;
        st.insert(n%10);
    }
    else
    {
        ull temp = n;
        n++;

        int allcount = st.count(9);
        int count = 0;
        while(temp > 0 && temp%10 == 9)
        {
            count++;
            temp /= 10;
        }
        st.erase(9);
        if(temp == 0) {st.insert(1);}
        else 
        {
            allcount -= count;
            while(allcount > 0)
            {
                st.insert(9);
                allcount--;
            }

            st.insert((temp%10)+1);
            allcount = st.count(temp%10)-1;
            st.erase(temp%10);
            while(allcount > 0)
            {
                st.insert(temp%10);
                allcount--;
            }
        }
    }
}

int main()
{   
    ll tests;
    cin >> tests;
    while(tests--)
    {
        ull n;
        cin >> n;
        multiset<int> st {};

        ull temp = n;
        while(temp > 0)
        {
            if(temp%10 != 0) {st.insert(temp%10);}
            temp /= 10;
        }
        
        bool flag = false;
        while(!flag)
        {
            if(check(st,n)) {flag = true; break;}
            update(st,n);
        }
        cout << n;

        cout << "\n";
    }
    
    return 0;
}