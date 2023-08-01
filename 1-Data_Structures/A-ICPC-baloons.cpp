/*
Problem link :-
         https://codeforces.com/gym/452736/problem/A
         
   How?
  - Using vector data structure is enough;
       -if the Letter apears for the first time add 2 to baloon recieved
       -else if appears for the second or more time add 1 to ballons recieved
       
*/
   
  
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    vector<int> v;
    while(t--){
        //number of P solved ;; baloon recieved  ;
        int n,br=0;
        string s;
        cin>>n>>s;
        
        
        for(auto i :s){
            if(count(v.begin(),v.end(),i))  br+=1;
            
            else{
                br+=2;
                v.push_back(i);
                
            }            
        }
        
        v.clear();
        
        cout<<br<<"\n";
    }
}