#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, p;
        cin >> n >> k >> p;

        if(k==0)
        {
            cout << "0"<< endl;
            continue;
        }
        if(k<=p && k>=-p){
            cout << "1" << endl;
            continue;
        }
        

        else{
            k= k<0?(-k):k;
            int m = k/p + (k%p==0?0:1);
            if(m > n)
            cout << "-1" << endl;
            else 
            cout << m << endl;
        }
    }
}