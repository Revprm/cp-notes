#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k, H;
        cin >> n >> m >> k >> H;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int h;
            cin >> h;
            if (abs(h - H) % k == 0 && abs(h - H) / k <= m - 1 && abs(h - H) / k != 0) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
