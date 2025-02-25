#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string s= "YES";
       
        vector<int> v(n);
        int m1;
        
        for(int i=0; i<n; i++)
        cin >> v[i];
        cin >> m1;
        for(int i=0; i<n-1; i++){
           
            if(v[i]>v[i+1]){
               
                //  if(m1-v[i]>v[i+1]){
                //     v[i+1]=m1-v[i+1];
                //     if(v[i]>v[i+1]){
                //         s="NO";
                // break;
                //     }
                //  }
                //  else{
                //     v[i]=m1-v[i];
                //     if(v[i]>v[i+1] || (i!=0 && v[i]<v[i-1])){
                //      s="NO";
                // break;
                // }
                //  }
                
                
               
            }
        }
        cout << s << endl;
    }
    return 0;
}