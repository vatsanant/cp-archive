#include <iostream>
#include <string>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string a, b;
        cin >> a  >> b;
        
        cout << b[0]<< a[1] << a[2] << " " << a[0] << b[1] << b[2] << endl;
    }

    return 0;
}