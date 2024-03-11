#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int x = 0, y = 0;
int main(){
    char str[101];
    scanf("%s", str);
    int pj = strlen(str);
    for (int i = 0; i < pj; i++){
        if (str[i] == 'R') x++;
        else if (str[i] == 'L') x--;
        else if (str[i] == 'U') y++;
        else if (str[i] == 'D') y--;
        else continue;
    }
    cout << x << " " << y;

    return 0;
}


/*
    R: Right (kanan) → robot bergerak dari (x, y) ke (x+1, y).
    L: Left (kiri) → robot bergerak dari (x, y) ke (x-1, y).
    U: Up (atas) → robot bergerak dari (x, y) ke (x, y+1).
    D: Down (bawah) → robot bergerak dari (x, y) ke (x, y-1).

*/