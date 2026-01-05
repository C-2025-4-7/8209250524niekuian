#include <iostream>
#include <cstring>  
using namespace std;
int indexof(const char* s1, const char* s2) {
    if (s1 == nullptr || s2 == nullptr) return -1;

    int len1 = 0, len2 = 0;
    while (s1[len1] != '\0') ++len1;
    while (s2[len2] != '\0') ++len2;

    if (len1 == 0) return 0;
    if (len1 > len2) return -1;
    for (int i = 0; i <= len2 - len1; ++i) {
        bool match = true;
        for (int j = 0; j < len1; ++j) {
            if (s2[i + j] != s1[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return i;
        }
    }

    return -1;
}
int main() {
    const int MAX_LEN = 1000;
    char s1[MAX_LEN], s2[MAX_LEN];

    cout << "请输入主字符串 s2: ";
    cin.getline(s2, MAX_LEN);

    cout << "请输入子字符串 s1: ";
    cin.getline(s1, MAX_LEN);

    int pos = indexof(s1, s2);

    if (pos == -1) {
        cout << "s1 不是 s2 的子串。\n";
    }
    else {
        cout << "s1 在 s2 中第一次出现的位置是: " << pos << endl;
    }

    return 0;
}