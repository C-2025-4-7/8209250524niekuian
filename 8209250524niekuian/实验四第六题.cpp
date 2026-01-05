#include <iostream>
#include <cctype>  
#include <cstring>
using namespace std;
void count(const char s[], int counts[]) {
    for (int i = 0; i < 26; ++i) {
        counts[i] = 0;
    }
    for (int i = 0; s[i] != '\0'; ++i) {
        char c = tolower(s[i]);
        if (c >= 'a' && c <= 'z') {
            counts[c - 'a']++;
        }
    }
}
int main() {
    const int MAX_LEN = 1000;
    char input[MAX_LEN];
    int counts[26];
    cout << "请输入一个字符串: ";
    cin.getline(input, MAX_LEN);
    count(input, counts);
    cout << "字母出现次数（非零）:\n";
    bool found = false;
    for (int i = 0; i < 26; ++i) {
        if (counts[i] > 0) {
            cout << static_cast<char>('a' + i) << ": " << counts[i] << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "没有英文字母。\n";
    }
    return 0;
}