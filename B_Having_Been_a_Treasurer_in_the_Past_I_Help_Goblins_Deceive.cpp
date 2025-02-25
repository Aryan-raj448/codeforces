#include <bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        long long h=0;
        long long u=0;
        while(n--){
            int k;
            cin >> k;
            if(k=='-')
            h++;
            else if(k=='_')u++;

        }
        // if(h <=1 || u==0){
        //     cout << '0' << endl;
        // continue;
        // }

        long long h1 =  h/2 * (h - h/2);
        cout << h1 * u << endl;
        

    }
}