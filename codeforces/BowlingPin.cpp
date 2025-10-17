#include <iostream>
#include <cmath>
#define ll long long
using namespace std; 

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
 
    int tc; 
    cin >> tc; 
    while(tc--){
        
        ll w, b; 
        cin >> w >> b; 
        ll sum = w + b; 

        ll appx = sqrt(1+8*sum);  // est value of n, whose n+(n+1)/2 is appx equals to w+b;
        appx--;
        appx = appx >> 1 ;

        cout << appx << "\n";
    }


    return 0; 
}

