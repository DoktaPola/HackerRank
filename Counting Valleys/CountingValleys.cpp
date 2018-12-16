#include <bits/stdc++.h>

using namespace std;

int countingValleys(int n, string s) {
    int counter = 0;
    int hight = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == 'D'){
            hight--;
        }else{
            hight++;
            if (hight == 0){
                counter++;
            }
        }
    }
    return counter;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}

