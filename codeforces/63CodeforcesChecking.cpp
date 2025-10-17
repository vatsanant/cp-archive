#include <iostream>
#include <string>
using namespace std;
int main(){
    int t; cin >> t;
    char c; 
    while(t--){
        cin >> c;
        if(c=='c'||c=='o'||c=='d'||c=='e'||c=='f'||c=='o'||c=='r'||c=='s')
        {
            cout << "YES\n";

        }
        else cout << "NO\n";
    }
}