#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

void miniMaxSum(vector<int> arr) {
  set<long> my_set;
  long count = 0;
  long new_count = 0;
  for (int i = 0; i < arr.size(); ++ i){
    count += arr[i];
  }
  for (int j = 0; j < arr.size(); ++j){
    new_count = count - arr[j];
    my_set.insert(new_count);
  }
  auto iter1 = my_set.begin();
  auto iter = my_set.rbegin();
    cout<< *iter1 << " " << *iter;
}

int main()
{
    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}


