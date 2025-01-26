#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t ;
    while(t--){
        int n;
        cin >> n;
      
        int sum=0;
        int ans=0;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            sum += x;
            int y = sqrt(sum);
            if(y%2!=0 && y*y ==sum){
                ans++;
            }
            
            
        }
        cout << ans << endl;
    }
    return 0;
}