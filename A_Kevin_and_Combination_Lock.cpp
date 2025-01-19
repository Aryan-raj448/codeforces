#include <bits/stdc++.h>
using namespace std;
int removeThree(int n){
    string str = to_string(n);
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '3' && str[i+1] =='3'){
            str.erase(i, 2);
        }
    }
    return stoi(str);
}

int sub33(int n){
    if(n%33 == 0){
       
        return 1;
    }
    else if(n < 33){
        return 0;
    }
    else{
        n-=33;
        return sub33(removeThree(n));
    }
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
       
        cin >> n;
        if(n%33 == 0){
            cout << "YES" << endl;
        }
        else{
          
           if(sub33(removeThree(n)) == 1){
               cout << "YES" << endl;
           }
           else{
               cout << "NO" << endl;
           }

        }
    }
}