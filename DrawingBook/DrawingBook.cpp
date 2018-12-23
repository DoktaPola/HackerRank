#include <bits/stdc++.h>

using namespace std;


int pageCount(int n, int p) {
    int first = p/2;
    int last;
    if ( n % 2 == 0){
        n++;
    }
    last = (n - p) / 2;
    int needed = min(first,last);
    return needed;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
