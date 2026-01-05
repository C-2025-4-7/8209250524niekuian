#include <iostream>
#include <cctype> 

using namespace std;

int hexCharToValue(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    }
    else if (c >= 'A' && c <= 'F') {
        return c - 'A' + 10;
    }
    else if (c >= 'a' && c <= 'f') {
        return c - 'a' + 10;
    }
    return -1;
}

int parseHex(const char* const hexString) {
    if (hexString == nullptr) {
        return 0;
    }

    int result = 0;
    const char* p = hexString;
    while (*p == ' ' || *p == '\t') {
        ++p;
    }
    if (*p == '0' && (*(p + 1) == 'x' || *(p + 1) == 'X')) {
        p += 2;
    }
    while (*p != '\0') {
        int digit = hexCharToValue(*p);
        if (digit == -1) {
            break;
        }
        result = result * 16 + digit;
        ++p;
    }

    return result;
}

int main() {
    char input[100];

    cout << "请输入一个十六进制数（可带或不带 0x 前缀）: ";
    cin.getline(input, sizeof(input));

    int decimal = parseHex(input);
    cout << "对应的十进制数是: " << decimal << endl;
    cout << "\n--- 内置测试用例 ---" << endl;
    cout << "parseHex(\"A5\") = " << parseHex("A5") << " (期望: 165)" << endl;
    cout << "parseHex(\"ff\") = " << parseHex("ff") << " (期望: 255)" << endl;
    cout << "parseHex(\"0\") = " << parseHex("0") << " (期望: 0)" << endl;
    cout << "parseHex(\"0x1A\") = " << parseHex("0x1A") << " (期望: 26)" << endl;

    return 0;
}