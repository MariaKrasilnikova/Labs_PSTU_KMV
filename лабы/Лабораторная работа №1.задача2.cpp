#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    cout << "1." << ' ' << - -m-++n << '\n';
    cout << "2." << ' ' << (m*n < n++) << '\n';
    cout << "3." << ' ' << (n-- > m++) << '\n';
    return 0;
}
