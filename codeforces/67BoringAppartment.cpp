#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string n; 
        cin >> n;
        int m = 0;
        if(n.length() == 1) m = 1;
        else if(n.length() == 2) m = 3;
        else if(n.length() == 3) m = 6;
        else if(n.length() == 4) m = 10; 
        cout <<  10 * ((n[0] - '0' ) - 1) + m << endl;
    }
    return 0;
}