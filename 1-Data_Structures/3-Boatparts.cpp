/* Problem link :-
    https://open.kattis.com/problems/Boatparts

I solved this Problem By using 2 approaches
     1.Looping and checking using vector
     2. using Unordered Set Data_structure
     
*/



//Approach 1


#include<bits/stdc++.h>

using namespace std;

int main(){
    //number of part;;number of days
    int np,nd,coun=0;
    cin>>np>>nd;
    bool f=0;
    vector<string> v;

    for(int i=0 ; i<nd ; i++){
        string pn; cin>>pn; //part name
        
        f = ( find(v.begin(), v.end(), pn) != v.end() ); //do exist
        //if it is not found then only count the parts
        if(f==false) coun++;
        if(coun==np){
            cout<<i+1;
            break;
        }
        
        v.push_back(pn);
    }
        
    if(coun < np)
        cout<<"paradox avoided";
    
}


//Approach 2 

#include<bits/stdc++.h>
using namespace std;

int main() {
    int p, n;
    cin >> p >> n;
    unordered_set<string> set;
    string part;
    for (int i = 0; i < n; i++) {
        cin >> part;
        set.insert(part);
        if (set.size() == p) {
            cout<<i+1;
            break;
        }
    }
    if(set.size() < p)
    cout <<"paradox avoided";
    return 0;
}
