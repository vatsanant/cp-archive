#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int tl; cin >> tl;
    ll max_excitement, min_steps;
    while(tl--){
        ll a, b; 
        cin >> a >> b;
        if(a == b){
            cout << 0 << " " << 0 << endl; //infinite excitement
            //return 0; //okay i was high af.  
            continue; 
        }
        
        max_excitement = abs(a - b); //limited excitement
        min_steps = min(a%max_excitement, max_excitement - a%max_excitement);
        cout << max_excitement << " " << min_steps << endl;
    }    
    return 0;

}
