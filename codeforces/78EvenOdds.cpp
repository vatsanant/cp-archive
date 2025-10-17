#include <iostream>
#define ll long long
using namespace std;
int main(){
     ll n, k;
    cin >> n >> k;
    ll j = (n+1) /2;
    if(n%2==0){
        if(k <= n/2) cout << 2*k - 1 << endl;
        else {
                k =  k - (n/2);
                cout << 2 * k << endl;
        }
    }

    else{
        if(k <= j){  
            cout << 2 * k - 1 << endl;
        }
        else{
            
                cout << 2 * (k - j) << endl;
        }
    }
    return 0;
}