#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

void Swap(int &el1, int &el2) {
    int tmp;
    tmp = el1;
    el1 = el2;
    el2 = tmp;
}

void QSort(std::vector<int> &vec, int low, int high) {
    int l = low, h = high;
    int pointer = low + (high - low + 1) / 2;
    int pivot = vec[pointer];
    while (low <= high) {
        while (vec[low] < pivot) {
            low++;
        }
        while (vec[high] > pivot) {
            high--;
        }
        if (low <= high) {
            Swap(vec[low], vec[high]);
            low++;
            high--;
        }
    }
    if (high > l) {
        QSort(vec, l, high);
    }
    if (low < h) {
        QSort(vec, low, h);
    }
}

int sockMerchant(int n, vector<int> ar) {
    int count;
    int f_count = 0;
    for (int i = 0; i < n; i += count) {
        count = 1;
        for (int j = i + 1; j < n; j++) {
            if (ar[i] == ar[j]) {
                count++;
            } else {
                break;
            }
        }
        if (count % 2 == 0) {
            int num = count / 2;
            f_count += num;
        } else {
            int num = (count - 1) / 2;
            f_count += num;
        }
    }
    return f_count;
}

int main() {
    int n;
    cin >> n;
    int num;
    vector<int> vec;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        vec.push_back(num);
    }
    int low = 0;
    int high = vec.size() - 1;
    QSort(vec, low, high);
    cout << sockMerchant(vec.size(), vec);
}
