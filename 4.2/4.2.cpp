#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double R, x, dx, y;

    cout << "������ �������� ��� R: ";
    cin >> R;
    cout << "������ ��������� �������� x: ";
    cin >> x;
    cout << "������ ���� dx: ";
    cin >> dx;

    cout << fixed << setprecision(3);
    cout << "-----------------------------" << endl;
    cout << "|    x    |       y        |" << endl;
    cout << "-----------------------------" << endl;

    for (; x <= 1; x += dx) {
        y = R * fabs(x + 3.5);
        cout << "| " << setw(8) << x << " |" << setw(14) << y << " |" << endl;
    }

    cout << "-----------------------------" << endl;
    return 0;
}
