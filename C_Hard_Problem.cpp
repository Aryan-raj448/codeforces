#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int front, back;
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        if(m<=a) front = m;
        else front = a;
        if(m<=b) back = m;
        else back = b;

        if(2*m - front - back <c)
        cout << 2*m << endl;
        else 
            cout << front + back + c << endl;
        


    }
}