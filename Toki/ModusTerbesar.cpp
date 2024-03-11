#include <iostream>
using namespace std;
#define maxX 1001

int main() {
    int N; cin >> N;

    int frequency[maxX] = {0};
    int maxFrequency = 0;
    int maxMode = -1, num;
    for (int i = 0; i < N; i++) {
        cin >> num;
        frequency[num]++;
        maxFrequency = max(maxFrequency, frequency[num]);
    }

    for (int i = 0; i < maxX; i++) {
        if (frequency[i] == maxFrequency) {
            maxMode = max(maxMode, i);
        }
    }

    cout << maxMode << endl;

    return 0;
}
