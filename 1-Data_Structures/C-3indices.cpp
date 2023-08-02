/*
Problem link :-
         https://codeforces.com/gym/452736/problem/C
         
   How?
   
   I tried The Naive 3 Nested loop method it got rejected on the 3rd test case because of time.
   my first try is linked at the bottom
   
   But then when I really think about i figured that numbers are not repeated that means we just need bottom
   find a peak for the array; for e.g 1,3,5,2 --> 5 is peak 
                                       5,4,3,6 --> there is no peak
                                       
   so if we start the loop from i = 1  to i <n-1  and if we find 
                                  - a[i] which is greater than both  a[i-1] and a[i+1] voila we have finished
                                  
   
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        
        size_t n; cin>>n;
        vector<int> v(n);
        int a;
        
        for(int i = 0 ; i<n ; i++){
            cin>>a;
            v[i]=a;
        }
        int mark =1;
        for(int i = 1 ; i < n-1 ; i++)
        {
            if(v[i]>v[i-1] and v[i] > v[i+1]){
                cout<<"YES\n";
                cout<<i<<" "<<i+1<<" "<<i+2<<"\n";
                mark = 0;
                break;
            }
        }
        if(mark)  cout<<"NO\n";
        
            
    }
}

  
/*   
  
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        int n,m; cin>>n;
        int mark=0;
        int arr[n];
        for(int h=0 ; h<n ; h++){
            cin>>m;
            arr[h]=m;
        }
        
        for(int i=0 ; i<n-2; i++){
            for(int j = i+1; j<n-1 ; j++){
                if(arr[i]<arr[j]){
                     for(int k = j+1 ; k<n ; k++){
                         if(arr[j] > arr [k]){
                             mark = 1;
                             cout<<"YES\n"<<i+1<<" "<<j+1<<" "<<k+1<<"\n";
                             goto endloop;
                             
                         }
                        
                    }
                }

                
            }
        }
        
        endloop:
        if(mark)  cout<<"";
        else cout<<"NO\n";
    }
}


*/