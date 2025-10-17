#include <iostream>
#include <string>
using namespace std;
int main(){
    int t; cin >> t;
    int count = 0;
    string a;
   for(int i = 1; i <= t; i++){
        cin >> a;
             if(a[0] == 'T') count += 4;
        else if(a[0] == 'C') count += 6;
        else if(a[0] == 'O') count += 8; 
        else if(a[0] == 'D') count += 12; 
        else if(a[0] == 'I') count += 20; 
    }

    std::cout << count << endl;
    
    return 0;
}