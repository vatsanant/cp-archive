#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> u(n); // each element will hold a pair of element
    for (int i = 0; i < n; ++i) {
        cin >> u[i].first >> u[i].second; // host dress color and guest color dress
    }

    int clash_count = 0; //times they have to wear guest dress over home dress. 
    for (int h = 0; h < n; ++h) {              //iterate through every first element and 
        for (int g = 0; g < n; ++g) {       //match it with the 2nd element. 
            if (h != g) { //0 != 0
                if (u[h].first == u[g].second) {
                    ++clash_count;
                }
            }
        }
    }

    cout << clash_count << endl;

    return 0;
}
