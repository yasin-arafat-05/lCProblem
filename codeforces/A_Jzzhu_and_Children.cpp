#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a;
    double b;

    // Separate lines for input variables
    cin >> a >> b;

    vector<int> v;

    for (int i = 0; i < a; i++) {
        int k;
        cin >> k;
        if (k <= b) {
            k = 0;
        }
        v.push_back(k);
    }

    double maxi = 0;
    int ans = 0;

    for (int i = 0; i < a; i++) {
        if (ceil(v[i] / b) >= maxi) {
            maxi = ceil(v[i] / b);
            ans = i;
        }
    }

    cout << ans + 1 << endl;

    return 0;
}
