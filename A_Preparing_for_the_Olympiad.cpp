#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >>n;
        vector<int> a(n);
        vector<int> b(n);
        for ( int i=0; i<n; i++){
            cin >> a[i];
        }
        for ( int i=0; i<n; i++){
            cin >> b[i];
        }
        int as=0, bs=0;
        for (int i=0; i<n-1; i++){
            if(a[i] > b[i+1]){
                as += a[i];
                bs +=b[i+1];

            }
        }
        cout << as + a[n-1] - bs << endl;
    }
    return 0;
}