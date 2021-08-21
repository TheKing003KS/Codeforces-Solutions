// Problem Link: https://codeforces.com/contest/1459/problem/A

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
        string red, blue;
        cin >> red >> blue;

        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(red[i] > blue[i]) {ans++;}
            else if(red[i] < blue[i]) {ans--;}
        }
        if(ans == 0) {cout << "EQUAL";}
        else if(ans > 0) {cout << "RED";}
        else {cout << "BLUE";}

        cout << "\n";
    }
    
    return 0;
}