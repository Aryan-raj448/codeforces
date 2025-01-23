#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        vector<int> a(n);
 
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int z=1;
        int i=0;
        while(i<a.size()){
            if(a[i]==0){
                a.erase(a.begin());

            }
            else{
                break;
            }
        }

        // for (auto item : a ){
        //     cout << item << " ";
        // }
        // cout << endl;
      
        while(!a.empty()){
            if (a[a.size()-1]==0){
                a.pop_back();

            }
            else{
                break;
            }
        }
        //   for (auto item : a ){
        //     cout << item << " ";
        // }
        // cout << endl;
        for( auto item : a){
            if (item ==0){
                z=2;
                break;
            }
        }
        if(a.empty() && z==1)
        cout << "0\n";
        else
        cout << z<< "\n";
       
    }
}