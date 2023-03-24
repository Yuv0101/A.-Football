
//                                     A. Football

// Petya loves football very much. One day, as he was watching a football match, he was writing the players' 
// current positions on a piece of paper. To simplify the situation he depicted it as a string consisting of 
// zeroes and ones. A zero corresponds to players of one team; a one corresponds to players of another team. 
// If there are at least 7 players of some team standing one after another, then the situation is considered 
// dangerous. For example, the situation 00100110111111101 is dangerous and 11110111011101 is not. You are given 
// the current situation. Determine whether it is dangerous or not.

// Input
// The first input line contains a non-empty string consisting of characters "0" and "1", which represents players. 
// The length of the string does not exceed 100 characters. There's at least one player from each team present on 
// the field.

// Output
// Print "YES" if the situation is dangerous. Otherwise, print "NO".



#include <bits/stdc++.h>
#include <vector>
#include <math.h>
#include <string>
#include <cstdlib>
#define ll long long
#define vll vector<long long>
#define pb push_back
#define pi pair<int, int>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)

#define pq priority_queue<ll, vector<ll>, greater<ll>>
#define all(v) v.begin(), v.end()
#define iparr                   \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> arr[i];          \
    }

using namespace std;

int main()
{
    string s1;
    cin >> s1;
    int condition = 1;
    for (int i = 1; i <= s1.length(); i++)
    {
        if (s1[i] == s1[i - 1])
        {
            condition++;
            if (condition == 7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else
        {
            condition = 1;
        }
    }
    cout << "NO" << endl;
    return 0;
}