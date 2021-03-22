#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    double f;
    f = (a + b + c + d + e) / 5.0;
    cout << fixed << setprecision(1) << f << endl;
}