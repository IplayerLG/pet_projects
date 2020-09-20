#include <iostream>
using namespace std;
int main(){
    cout << "Which fibonacci number you need?(beetween 0 and 60)" << endl;
    int n;
    cin >> n;
    if(n > 60) {
        cout << "Sorry this number soooo large we can't find it take number between 0 and 60" << endl;
        return 0;
    }
    long long a[n+1];
    a[1] = 1;
    for(int i = 2; i <= n; i++) {
        a[i] = a[i-1] + a[i-2];
    }
    cout << a[n] << endl;
}