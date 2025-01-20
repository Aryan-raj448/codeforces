#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(3);
        int sum =0;
        int t=0;
        for(int i=0; i<3; i++){
            cin >> v[i];
            sum += v[i];
        }
       
        if(n>=sum){
            t = n/sum;
            n = n%sum;
        }
        int i=0;
        while(n>0){
            n -= v[i];
            i++;
        }
        cout << 3*t + i << "\n";
        }
        
return 0;
}