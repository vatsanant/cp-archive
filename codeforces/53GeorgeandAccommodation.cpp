#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int tr = 0;
    while(n--){
        int m, n;
        cin >> m >> n;
        if(n - m >= 2){
            tr++;
        }
    }
    cout << tr << endl;

    return 0;
} 