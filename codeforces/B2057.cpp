/* 
 * Gorrila and the Exam
 * 18.01.24
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution{

public:
    // calc total subarrays with same element -> calc subarrays whose sum of lenth is equal to p -> subtract
    int solve(int n, int k, vector<int>& a){
/*
    unordered_map<int, int> mp;
    for(int i = 0; i < a.size(); i++){
        mp[a[i]]++;
    } 
    Caused TLE for greater input.
    Using a vector instead of unordered_map is more efficient 
    due to reduced overhead and better memory locality and avoiding hash collision.
*/
        sort(a.begin(), a.end());
        vector<int> cnt = {1}; // vector of one elemenet
        for (int i = 1; i < n; i++){ // store the freq of each element in an array
            if (a[i] == a[i - 1]) {
                cnt.back()++;   //if equals, increase the last element
            } else {
                cnt.emplace_back(1); // if not, add one last element
            }
        }
        sort(cnt.begin(), cnt.end()); // sort the freq. vector
        int m = cnt.size();
        int ans = 0;
        for(int i = 0; i < m-1; i++){// greedy approach
            if(cnt[i] > k){
                return m - i;
                k = 0;
            }
            else {
                k -= cnt[i];
            }
        }
        return 1;
    }

    int solveBetter(const vector<int>& a, int k) {
        vector<int> cnt;
        vector<int> sorted = a;
        sort(sorted.begin(), sorted.end());
        int start = 0;
        int n = a.size();
        for (int i = 0; i <= n; ++i) {
            if ((i == n) || (sorted[i] != sorted[start])) {
                cnt.push_back(i - start);
                start = i;
            }
        }
        sort(cnt.begin(), cnt.end(), greater<int>());
        while ((int(cnt.size()) > 1) && (k >= cnt.back())) {
            k -= cnt.back();
            cnt.pop_back();
        }
        return cnt.size();
    }

} sol;

int main(){
    int tc; 
    cin >> tc;
    while(tc--){
        int n, k; 
        cin >> n >> k; 
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
//        int ans = solve(n, k, a); 
        int ans = solveBetter(a, k);
        cout << ans << endl;
    }

    return 0; 
}
