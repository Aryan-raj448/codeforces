#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i=0; i<n ; i++){
            cin >> v[i];
        }
        int valid=1;
        
            
        
        for(int i=0; i<n-1; i++){
           if(v[i]>v[i+1]){
            valid =0;
            break;
           }
           else{
            int c=v[i];
            v[i]= 0;
            v[i+1] = v[i+1]-c;
           }
        }
        if(valid)
        cout << "YES"<< endl;
        else
        cout << "NO" << endl;
    }
    return 0;
}
