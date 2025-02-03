#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int n, l, r, k;
        cin >> n >> l >> r >> k;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];

        }
        if(l>k){
            cout << "0" << endl;
            continue;

        }
        sort(v.begin(), v.end());
        int i=0;
        while(v[i]<l && i<n){i++;}
        
        int ct=0;
        while(v[i]<=r && i<n){
            if(v[i]>k){
                break;
            }
            k-=v[i];
            ct++;
            i++;

        }
        cout << ct << endl;
    }
}