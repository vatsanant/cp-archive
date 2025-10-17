#include <bits/stdc++.h>
using namespace std;
int main(){

    int t; cin >> t;
    int a[4];

    int p1 , p2, s1, s2;

    while(t--){
        for(int i = 0; i < 4; i++){
            cin >> a[i];

        }

        p1 = max(a[0], a[1]);
        p2 = max(a[2], a[3]);

            sort(a, a+4);

        s1 = a[2];
        s2 = a[3];
        
        if((s1 == p1 || s1 == p2) && (s2 == p1 || s2 == p2)){
            cout << "YES\n";

        }
        else{
            cout << "NO\n";
        }




    }
    return 0;

}