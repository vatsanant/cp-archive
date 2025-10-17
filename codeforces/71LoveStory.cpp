#include <iostream>
#include <string>
using namespace std;
int main(){
    int t; cin >> t;
    string a = "codeforces";
              //coolforsez
    while(t--){
        string c; 
        cin >> c;
        int count = 0;
        for(int i = 0; i < 10; i++){
            if(a[i] != c[i])count++;
        }  
        cout << count << endl;

    }
    return 0;
}