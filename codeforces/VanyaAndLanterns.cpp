#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip> 

#define ll long long

using namespace std; 

int main(){

    ll n, l; 
    cin >> n >> l; 
    vector<int> a(n); 

    for(int i=0;i<n;i++ ){
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    long double d = 0;
    for(int i = 0; i < n - 1; i++){
       long double gap = (static_cast<long double>(a[i+1]) - a[i]) / 2;
        d = max(d, gap);

    }

    long double d1 = (static_cast<long double>(l) - a[n-1]);
    long double d2 = (static_cast<long double>(a[0]) - 0);

    cout <<  fixed << setprecision(10) <<  max(d, max(d1, d2)) << endl;

return 0;
}
