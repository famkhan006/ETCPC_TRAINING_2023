//https://open.kattis.com/problems/quadrant
#include<bits/stdc++.h>
//#include<cstdlib>
using namespace std;

int main(){
    
    int x , y;
    cin>>x>>y;
    
    //Just to include the input conditions Not really Necessary
    //I just Thought it cant be this easy!!
    /*if(x>1000 or x<-1000 or x == 0)
        exit();
    if(y>1000 or y<-1000 or y==0)
        exit();
    */
   
   
    //Quadrant Selection
    if(x>0 and y>0)
        cout<<1;
    else if(x<0 and y>0)
        cout<<2;
    else if(x<0 and y<0)
        cout<<3;
    else
        cout<<4;
}
