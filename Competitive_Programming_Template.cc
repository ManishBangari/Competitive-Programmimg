
/* 
Date Created: 10 November 2022
Creator : Manish Bangari 
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vl = vector<long>;
using pi = pair<int,int>;

#define pb push_back
#define sz(x) (int) (x).size()
#define all(x) x.begin(), x.end()
#define f first
#define s second
#define mp make_pair

const int MOD = 1e9 + 7;
const float PI = 3.1415926535;

int gcd(int a, int b){
        int result = ((a < b) ? a : b);
        while (result > 0) {
            if (a % result == 0 && b % result == 0)	break;
            result--;
        }

        return result;
}

void solve(){

    return;
}

int main(){

    int test;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> test;
    while (test--){	solve();	cout << "\n";	}

    return 0;
}
