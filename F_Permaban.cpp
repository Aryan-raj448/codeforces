#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        int m = *min_element(v.begin(), v.end());
        vector<int> index;
        for(int i=0; i<n; i++){
            if(m==v[i])
            index.push_back(i+1);
        }

        cout << n*m + (n-index.size()) << endl;

    }
    return 0;
}