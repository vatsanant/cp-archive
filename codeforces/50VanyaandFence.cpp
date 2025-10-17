#include <iostream>
using namespace std;
int main(){
    int n, h;
    cin >> n >> h;

    int cahurikaran = 0;

    int friends[n];

    for(int i = 0; i < n; i++){
        cin >> friends[i];
        if(friends[i] <= h){
            cahurikaran += 1;   
        }
        else{
            cahurikaran += 2;
        }
    }
    cout << cahurikaran;

    return 0;
}