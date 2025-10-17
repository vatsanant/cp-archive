#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n; 
    cin >> n; 
    
    vector<int> a(n);
    for(int i=0; i < n; i++){
        cin >> a[i];
    }
    
    int ans = 1;
    int cnt = 1;
    for(int i=0; i<n-1; i++){
        if(a[i+1] > a[i]){
            cnt++;
        }
        else{
            cnt = 1;
        }
        ans = max(ans, cnt);
    }

    cout << ans << endl;



    return 0;
}
