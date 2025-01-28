#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int m,n;
        cin >> n >>m;
        vector<vector<int>> v(n, vector<int>(m, 0));
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++){
                cin >> v[i][j];
            }

        for(int i=0; i<n; i++){
            sort(v[i].begin(), v[i].end());
        }
        for(int i=0; i<n; i++)
            for(int j=0; j<m-1; j++){
                if(v[i][j]+1 == v[i][j+1] || v[i][j]-1 == v[i][j+1])
                cout << "no" << endl;
                return 1;
            }
    }
}