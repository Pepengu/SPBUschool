#include <iostream>
#include <vector>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> divisors;
    
    cout << "1 ";
    for(int i = 2; i*i <= n; ++i){
        if(n%i==0){
            cout << i << " ";
            if(i*i!=n){
                divisors.push_back(n/i);
            }
        }
    }

    for(auto el : divisors){
        cout << el << " ";
    }

    cout << "\n";
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
    cout.flush();
    return 0;
}
