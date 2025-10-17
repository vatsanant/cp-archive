#include <iostream>
using namespace std;
int main(){

    int n; cin >> n;
    int a, b;
    int total_pass = 0;
    int max_pass = 0;

    // a exited & b entered;

    while(n--){
        cin >> a  >> b;
        total_pass = (total_pass - a) + b;

        if(max_pass < total_pass){
            max_pass = total_pass;
        }
    }

    cout << max_pass;

    return 0;
}