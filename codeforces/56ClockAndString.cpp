#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){   
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if( c > min(a,b) && c < max(a,b)){
        if( d > min(a, b) && d < max(a,b)){
            cout << "No\n";
            }
        else{
            cout << "Yes\n";
        }
    }

    else{
        if(d > min(a,b) && d < max(a,b)){
            cout <<"YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

}
    return 0;
}