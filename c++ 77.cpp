#include <iostream>
using namespace std;
int main() {
    cout << "Welcom to your taxicab!\n";
    float Hc = 3.20;
    int x;
    int y;
    cout << "Enter the duration to the nearst min.:";
    cin >> x;
    cout << "Enter the distance traveld:";
    cin >> y;
    float sum = (2.05 * y) + (0.95 * x) + Hc;
    int tm_hour;
    cout << "Enter when the trip started:";
    cin >> tm_hour;
    if (tm_hour < 7, tm_hour = 23, tm_hour = 24)
        cout << "THE COST=" << sum + (0.15 * sum);
    else
        cout << "THE COST=" << sum;
}