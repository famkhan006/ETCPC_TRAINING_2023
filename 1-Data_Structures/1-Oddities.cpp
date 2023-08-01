/*just to check if a number is Even or Odd
  question link 
    https://open.kattis.com/problems/oddities
*/


#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        if(n % 2 == 0)
            cout<<n<<" is even\n";
        else
            cout<<n<<" is odd\n";
    }
}
