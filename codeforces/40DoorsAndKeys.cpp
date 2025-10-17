#include <iostream>
#include <string>
using namespace std;

int main(){

    int t; cin >> t;

    while(t--){

        int r_index, g_index, b_index, R_index, G_index, B_index;
        r_index = g_index = b_index = 0;
        //So logic is that the index of key should be less than corresponding door, Bingo that's it..
        
        string word;
        getline(cin, word);

        for(int i = 0; i < 6; i++)
        {
            if(word[i] == 'r'){
                r_index = i;
            }
            else if(word[i] == 'g')
            {
                g_index = i;
            }
            else if(word[i] == 'b')
            {
                b_index = i;
            }
            else if(word[i] == 'R')
            {
                R_index = i;
            }
            else if(word[i] == 'G')
            {
                G_index = i;
            }
            else if(word[i] == 'B')
            {
                B_index = i;
            }

        }
    }
    
    return 0;
}