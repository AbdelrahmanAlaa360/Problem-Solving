#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int t, x;
    cin >> t;
    while(t--){
        cin >> x;
        auto it = lower_bound(v.begin(), v.end(), x);        
        if(v[it - v.begin()] == x) cout << "Yes ";
        else cout << "No ";
        cout << it - v.begin() + 1 << endl;
    }
    
    return 0;
}
