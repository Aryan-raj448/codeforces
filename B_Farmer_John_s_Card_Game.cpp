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
        vector<int> map(m);

        int valid=1;
        
            for(int j=0; j<m; j++){
                if(v[j][0]<m)
                map[v[j][0]] = j;
                else{
                    valid =0; break;
                }
            }
            
    }
}