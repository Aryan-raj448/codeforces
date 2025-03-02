#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        int ct=0;
        string s;
        cin >> s;
        int i=0;
        
        for(i=0; i<n-2; i++){
            if(s[i]==s[i+1])
                ct++;
            else{
                if(s[i]==s[i+2]){
                    ct++;
                    i++;
                }

            }
        }
        if(s[i]==s[i+1])
        ct++;

        cout << ct << endl;

        
    }
    return 0;
}