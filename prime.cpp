#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool flag = true;

    for(int i = 2; i < sqrt(n); i++) {
        if(n % i == 0) {
            flag = false;
            break;
        }
    }

    if(flag) cout << n << " is a prime no." << endl;
    else cout << n << " is not a prime no." << endl;

    return 0;
}
