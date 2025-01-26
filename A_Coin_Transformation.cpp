#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, ct=1;
        cin>> n;
        while(n>3){
             n/=4;
             ct*=2;
        }
            cout << ct << endl;
           

    }
}