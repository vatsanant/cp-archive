#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int x = n * m;
    char c;
    bool IsBlackWhite = true;
    while(x--){
        cin >> c;
       
        if(c == 'C' || c == 'M' || c == 'Y'){
            IsBlackWhite = false;
        }
    }
    if(IsBlackWhite == true)cout << "#Black&White\n";
    else cout << "#Color\n"; //fucking hell 

    
    return 0;
}