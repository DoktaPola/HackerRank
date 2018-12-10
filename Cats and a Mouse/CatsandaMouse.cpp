#include <bits/stdc++.h>

using namespace std;


string catAndMouse(int x, int y, int z) {
    if (abs(z - x) < abs(z - y)){
        return "Cat A";
    } else if (abs(z - x) < abs(z - y)){
        return "Cat B";
    }else{
        return "Mouse C";
    }
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    cout << catAndMouse(x, y, z);
}