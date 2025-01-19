#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, stor=0;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        cin >> v[i];

        for(int i=0; i<n; i++){
            if(v[i]!=0){
                stor = v[i];

            }
            else if(v[i]==0 && v[i+1]!=0 && stor!=0){
                stor=2;
                break;
            }
        }
    }
}