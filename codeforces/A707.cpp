    //need revisitng 
    #include <iostream>
    #include <string>
    #include <vector>
    using namespace std;
    int main(){
        int n, m;
        cin >> n >> m;
        cin.ignore();
        bool isBlackWhite = true;

        vector<vector<char>> arr(n, vector<char>(m));

        for(int i = 0; i < n; ++i){ //row
            for(int j = 0; j < m; ++j){//column
            cin >> arr[i][j];
            cin.ignore();
                if(arr[i][j] == 'C' || arr[i][j] == 'M' || arr[i][j] == 'Y'){
                    cout << "#Color\n";
                    isBlackWhite = false;
                    return 0;
                }
            }
        }

        if(isBlackWhite) cout << "#Black&White\n";

        return 0;
    }
