#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
      string s;
      cin >> s;
            int ans = s.size();

      for(int i=0; i<s.size()-1; i++){
        if(s[i]==s[i+1]){
            ans =1;
            break;
        }
      }
      cout << ans << endl;
    }
    return 0;
}