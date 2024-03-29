#include <iostream>
#include <cmath>
#include <algorithm>
#include <queue>
#include <bitset>
#include <set>
#include <vector>
#include <string>
#include <cstring>
#include <map>
#include <stack>

using namespace std;

int n;

void star(int i, int j, int n){
    if((i / n)%3 == 1 && (j / n)%3 == 1) {
        cout << ' ';
    }
    else
    {
        if(n / 3 == 0)
            cout <<'*';
        else
            star(i,j,n/3);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            star(i,j, n);
        cout << '\n';
    }
}
