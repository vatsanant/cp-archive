#include <iostream>
#include <vector>
using namespace std; 
int main(){
    int tc; 
    cin >> tc;

    
    while(tc--){
        int n; 
        cin >> n; 
        vector<int> a(n+1);
        int es, os; es = os = 0;
        

        for(int i = 1; i<=n; i++){
            cin >> a[i];
            if(i%2!=0) os = os + a[i];
            else es += a[i];

        }
        cout << os - es << endl;
        // for(int i = 1; i <= n; i++){
        //     cout << a[i] << endl;
        // }
    }

    return 0;
}