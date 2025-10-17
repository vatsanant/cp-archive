#include <iostream>
#include <vector>

using namespace std; 

int main(){
    int tc; 
    cin >> tc; 
    while(tc--){
        int n, s = 0; 
        cin >> n; 
        vector<int> a(n); 
        int ones = 0, tws = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            s+= a[i];
            (a[i] == 1) ? ones++ : tws++;
        }
        if(s%2!=0){
            cout << "NO\n";
        }
        else{
            if(ones > 0 || (tws % 2 == 0)){
                cout << "YES\n";
            }
            else{
                cout << "NO\n"; 
            }
        }
    }


    return 0; 
}
