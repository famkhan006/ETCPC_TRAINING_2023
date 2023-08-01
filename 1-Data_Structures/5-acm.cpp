/*
  Problem  link :-
            https://open.kattis.com/problems/acm
             
How To Solve?
    -Using Hashmap of ( problem type, number of apearance) 
     is i think the best way in this problem.
     
    -we count the number of time of wrong answers(freq(type)) by using the Map 
    -then if the answer is right we add (20*freq(type)) to the current penality.
    
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    //penality ;;right answers ;;total penality
    int pen,cr=0,tpen=0;
    // problemType ;; correctness
    char typ;
    string cness;
    map<char,int> freq;
    while(true){
        cin>>pen>>typ>>cness;
        if(pen==-1) 
            break;
            
        if(cness =="wrong"){
            if(freq.count(typ))  freq[typ]++;
            else                 freq[typ]=1;
            
        }
        else{
            cr++;
            if(freq.count(typ)) tpen += pen + (freq[typ]*20);
            else                tpen +=pen;
        }
     
    }
    cout<<cr<<" "<<tpen;
}