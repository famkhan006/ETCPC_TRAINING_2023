/*Using set Data Structure this can be resolved Easily
* Problem link:-
*  https://open.kattis.com/problems/everywhere
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;  cin>>t;
    
    while(t--)
    {
        int n; cin>>n;
        
        set<string> s;
        for(int i = 0 ; i < n ; i++)
        {
            string k; cin>>k;
            s.insert(k);
        }
        
        cout<<s.size()<<"\n";
    }
}