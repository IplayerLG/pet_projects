#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double fac(long long n) {
    double ret = 1;
    for(long long i = 1; i <= n; i++) {
        ret *= i;
    }
    return ret;
}
int main() {
    cout << "How much digit after dot you need?" << endl;
    int n;
    cin >> n;
    double val = 0;
    for(long long i = 0; i <= 6; i++) {
        val += pow(-1, i) * fac(6 * i) * (13591409 + 545140134 * i) / fac(3 * i) / pow(fac(i), 3) / 
        pow(pow(640320, 3), (double)i + 0.5);
    }
    val *= 12;
    double pi = 1.0 / val;
    cout << fixed << setprecision(n) << pi << endl;
}
