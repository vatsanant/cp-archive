#include <iostream>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        int m; 
        cin>>m;
        for(int i = 1; i <= m; i++){

            if(i%3==0 || i%10==3){
                m++;
            }
        }
        cout << m << endl;
    

    }
    return 0;
}