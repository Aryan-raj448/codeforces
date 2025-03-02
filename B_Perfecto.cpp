#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum=0;
        int p=1;
        int k;
        vector<int> v(n);
        vector<int> residue;
        for(int i=1; i<=n; i++){
            v[i-1]=i;
            if(i>1 && v[i-2]==v[i-1])
            v[i-1]++;
            sum+=v[i-1];
            if(sum>p*p)
            p++;
            if(sum==p*p){
                sum++;
                v[i-1]++;
                p++;
                residue.push_back(i);
            }
            if(v[i-1]==n){
                k=i;
                break;
            }
        }
        for(int i=k; i<n; i++){
            int j=0;
            v[k]=residue[j];
            j++;

        }
        for(int i=0; i<n; i++){
            cout << v[i] << " ";
        }
        cout << endl;
        


        }
}