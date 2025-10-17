#include <iostream>
using namespace std;
int main(){
    int n, t; 
    string q; 
    cin >> n >> t >> q;
    while(t--){
        for(int i = 1; i < n; i++){
            if(q[i-1] == 'B' && q[i] == 'G'){
                q[i-1] = 'G';
                q[i] = 'B';
                i++;
            }
        }
        
    }
    cout << q;

    return 0;
}