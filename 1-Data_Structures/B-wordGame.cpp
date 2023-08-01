/*
 * My first trywhich is  not accepted is available at the bottom; I used vector instead of using set 
Problem link :-
         https://codeforces.com/gym/452736/problem/B

   How?

   -Really this is Naive method to solve I guess but this what i cameup
   - store all the words in a hash_map to count the number of apearance of the word;
   - store -the first n words in p1 set container
           - the 2nd n words in p2
           - the 3rd n words in p3
    - store all the words in a hash_map to count the number of apearance of the word;

    -iterate through p1,p2,p3 and if each element
          -appear 1 times  playerscore +=3
          -apear  2  times   playerscore +=1

*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;
    unordered_map<string,int> freq;
    set<string> p1,p2,p3;
    while(t--){
        int p1s=0,p2s=0,p3s=0;
        int n; cin>>n;
        for(int i = 0 ; i<n*3 ; i++){
            cin>>s;

            if(i<n)       p1.insert(s);
            else if(i<n*2)  p2.insert(s);
            else          p3.insert(s);
        }

        for(auto i : {p1,p2,p3}){
            for(auto j : i){
                freq[j]++;
            }
        }
        for(auto i : p1){
            int k=freq[i];
            if(k==1)  p1s+=3;
            else if(k==2)  p1s+=1;
        }
        for(auto i : p2){
            int k=freq[i];
            if(k==1)  p2s+=3;
            else if(k==2)  p2s+=1;
        }
        for(auto i : p3){
            int k=freq[i];
            if(k==1)  p3s+=3;
            else if(k==2)  p3s+=1;
        }
        freq.clear();
        p1.clear(); p2.clear(); p3.clear();
        cout<<p1s<<" "<<p2s<<" "<<p3s<<"\n";
    }

}




/**********************************************************************
//THIS WAS MY FIRST TRY IT AINT WORK BECAUSE IT DIDNT CONSIDER THAT IF THE A PLAYER BECOMES STUPID AND REPEAT HIS OWN WORD IT SHOUDNT BE COUNTED

*  
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;
    unordered_map<string,int> freq;
    vector<string> p1,p2,p3;
    while(t--){
        int p1s=0,p2s=0,p3s=0; 
        int n; cin>>n;
        for(int i = 0 ; i<n*3 ; i++){
            cin>>s;
            freq[s]++;
            if(i<n)       p1.push_back(s);
            else if(i<n*2)  p2.push_back(s);
            else          p3.push_back(s);
        }
        
        for(auto i : p1){
            int k=freq[i];
            if(k==1)  p1s+=3;
            else if(k==2)  p1s+=1;
        }
        for(auto i : p2){
            int k=freq[i];
            if(k==1)  p2s+=3;
            else if(k==2)  p2s+=1;
        }
        for(auto i : p3){
            int k=freq[i];
            if(k==1)  p3s+=3;
            else if(k==2)  p3s+=1;
        }
        freq.clear();
        cout<<p1s<<" "<<p2s<<" "<<p3s<<"\n";
    }
    
}

*/
