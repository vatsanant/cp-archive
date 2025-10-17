#include <iostream>     //NEWYEARANDCHRISTMASMEN
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    n1 = n1 + n2;
    sort(n1.begin(), n1.end());
    sort(n3.begin(), n3.end());
    if(n1==n3) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}