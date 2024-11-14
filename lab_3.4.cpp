#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a;
    double b;
    double x;
    double y;
    double R;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;

    // розгалуження в повній формі
    if ((a > R && b < R) && (y * y <= (R * R) - (x * x) && y >= -b && y < 0 && x <= 0 && x >= -R) ||
        (y * y > ((R * R) - (x * x)) && y <= b && y > 0 && x < R && x <= a)) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
    cin.get();
    return 0;
}