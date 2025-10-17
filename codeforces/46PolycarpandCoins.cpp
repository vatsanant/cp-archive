#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int c2, c1;
       
        if(n%3 == 0){
            c2 = c1 = n/3;
            cout << c1 << " " << c2 << '\n';
        }
        else if(n%3 == 1){
            c1 = (n/3) + 1;
            c2 = n/3;
            cout << c1 << " " << c2 << '\n';
        }
        else if(n%3 == 2){
            c2 = (n/3) + 1;
            c1 = n/3;
            cout << c1 << " " << c2 << '\n';

        }


    }

    return 0;
}