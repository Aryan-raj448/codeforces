#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long p, q;
        cin >> p >>q;

        if(p==1)
        {
            cout << q << endl;
            continue;
        }
        vector<long long> v;
        for(long long i=0; i<p-1; i++){
            q=q|i;
            v.push_back(i);
        }
        v.push_back(q);

        for(int i=0; i<v.size(); i++)
        cout << v[i]<< " ";
        cout << endl;

    }
}