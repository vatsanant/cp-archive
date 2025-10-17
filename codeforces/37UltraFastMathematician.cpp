#include <vector>
#include <iostream>
using namespace std;
int main(){
    string num, mum;
    cin >> num >> mum;
    string ans = "";

    

    for(int i = 0 ; i < num.length(); i++){
        if(num[i] == mum[i]){
            ans += '0';

        }
        else{
            ans += '1';
        }
    }

     for (int i = 0; i < num.length(); i++) {
        cout << ans[i];
    }



    return 0;
}

//Huhh I defeated that little brat xD 