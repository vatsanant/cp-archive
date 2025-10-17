#include <iostream>
#include <string>
using namespace std;
int main(){
    int X = 0;

    int n;
    cin >> n;
    string s;
    while(n--){
        cin >> s;
        if(s == "X++" || s == "++X"){
            X++;
        }
        else{
            X--;
        }
    } 
    cout << X;
    return 0;
}