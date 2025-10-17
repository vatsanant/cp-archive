#include <iostream>
using namespace std;
int main(){
    string p;
    cin >> p; 
    bool canPrint = false;
    for(int i = 0; i < p.size(); i++){
        if((p[i] - 0 == 72) || (p[i] - 0 == 81) || (p[i] - 0 == 57)){
            canPrint = true;
            cout << "YES" << endl;
            return 0;
        }
    }
    if(!canPrint) cout << "NO" << endl;
    
    
    return 0;
}