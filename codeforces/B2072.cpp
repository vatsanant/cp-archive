#include <iostream>

using namespace std; 

int main(){
    
    int tc; 
    cin >> tc; 
    while(tc--){
        int n; 
        cin >> n;
        string s; 
        cin >> s; 
        // rearrane to max the profit.
        // total no. of hypen - & total dash _
        long long  td = 0, th = 0; 
        for(int i = 0; i  < n; i++){
            if(s[i] == '-'){
                td++; 
            }
            else{
                th++;
            }
        }   
        if(td < 2){
            cout << 0 << endl;
        }
        else if(td%2==0){
            cout << (td / 2) * (td / 2) * th << '\n'; 
        }   
        else{
            long long d = (td - 1 )/ 2;
            cout << d * (d+1) * th << '\n';
        }   
    }   


    return 0; 
}
