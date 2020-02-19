#include <iostream>
#include <vector>
#include <string>

int find_max(std::vector<int> &vec){
    int maxi = vec[0];
    for (auto& el:vec){
        if( el > maxi){
            maxi = el;
        }
    }
    return maxi;
}

void rez(std::string &s, std::vector<int> &vec) {
    std::vector<int> additional;
    const std::string alph = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < s.size(); ++i) { //цикл для строки
        for (int j = 0; j < alph.size(); ++j) { // поиск в алфавите
            if (s[i] == alph[j]){
                additional.push_back(vec[j]);
            }
        }
    }
    int maxi = find_max(additional);
    int answer = maxi*s.size();
    std::cout << answer;

}


int main() {


    std::vector<int> vec;
    int hight = 0;
    for (int i = 0; i < 26; ++i) {
        std::cin >> hight;
        vec.push_back(hight);
    }
    std::string str;
    std::cin >> str;


    rez(str, vec);
    return 0;
}
