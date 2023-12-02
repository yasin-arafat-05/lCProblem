#include <iostream>

using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    
    if (x1 == x2 && x2 != x3 && y1 != y2 && y2 == y3) {
        cout << x3 << " " << y1 << endl;
    } else if (x1 == x2 && x2 != x3 && y1 == y2 && y2 != y3) {
        cout << x3 << " " << y3 << endl;
    } else if (x1 == x2 && x2 != x3 && y1 == y3 && y3 != y2) {
        cout << x3 << " " << y2 << endl;
    } else if (x1 != x2 && x2 == x3 && y1 == y3 && y3 != y2) {
        cout << x1 << " " << y2 << endl;
    } else if (x1 != x2 && x2 == x3 && y1 == y2 && y2 != y3) {
        cout << x1 << " " << y3 << endl;
    } else if (x1 != x2 && x2 == x3 && y1 != y2 && y2 == y3) {
        cout << x1 << " " << y1 << endl;
    } else if (x1 == x3 && x3 != x2 && y1 == y3 && y3 != y2) {
        cout << x2 << " " << y2 << endl;
    } else if (x1 == x3 && x3 != x2 && y1 == y2 && y2 != y3) {
        cout << x2 << " " << y3 << endl;
    } else if (x1 == x3 && x3 != x2 && y1 != y2 && y2 == y3) {
        cout << x2 << " " << y1 << endl;
    }

    return 0;
}
