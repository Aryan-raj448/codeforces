#include <bits/stdc++.h>
using namespace std;



int main() {
    
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin >> n >> m;
        vector<int> a(n);
        string s;
        for (int i=0; i<n; i++){
            cin >> s;
            a[i] = s.size();
        } 
        int i=0;
        while(m>0 && i<n){
            m -= a[i];
           if(m>=0)
           i++;
           else break;
            }
             
        
        cout << i << endl; 
    }

    return 0;
}