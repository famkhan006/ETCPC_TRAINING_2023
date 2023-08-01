/*
Problem link :- 
    https://open.kattis.com/problems/parking2
    
Really this problem Easy wherever he parks his car in the range of the shops he needs to travel twice 
as the Range of the distance  

A-------B-------C--------D
10      30      40       60
lets say he parks the car at B 
  then he needs to walk  to D  which is 30 meters.
  then he needs to walk  to A   which is 50 meters.
  then he needs to turn back to his car B which is 20 meters.
       30+50+20 = 100 ;  which is the same as  (60-10)*2


*/ 


#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc,loc,mx,mn;
    cin >> tc;
    while (tc-- > 0) {
        int n; cin >> n;
        
        vector<int> v(n);
    
        for (int i = 0; i < n; i++) {
            cin>>loc;
            v[i] = loc;
        }
        
        mx = *max_element(v.begin(),v.end());
        mn = *min_element(v.begin(),v.end());
        cout << (mx - mn) * 2 << endl;
    }
    return 0;
}

