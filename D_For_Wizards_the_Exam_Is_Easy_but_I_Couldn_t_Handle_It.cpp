#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int l,r;
        vector<int> v;
        for(int i=0 ; i<n; i++)
        cin >> v[i];
        int max = v[n-1];
        for(int i=n-1; i>0; i--){
            if(v[i]<v[i-1]){
                max=v[i-1];
                l=i;
            }
            
            
        }

        for(int i=n-1; i>0; i--){
            if(v[i]<=max){
                r = i+1;
                break;
            }
           
        }
        cout << l << r << endl;


    }
}