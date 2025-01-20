#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t-->0){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
        }

        int max=-1;
     
        for(int i=0; i<n; i++){
            if(max > v[i]){
                cout << "0 ";
                
            }
            else{
                cout << "1 ";
                max = v[i];
            }
            
        }
        cout << "\n";
    }
}
