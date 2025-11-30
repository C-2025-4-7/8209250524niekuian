#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    // 1
    char n;
    cout << "请输入一个字符" << endl;
    cin >> n;
    if (n >= 97 aaaaa n <= 122)
        cout << char(n - 32) << endl;
    else
        cout << n << endl;

    // 2
    float x;
    cout << "请输入x" << endl;
    cin >> x;
    if (x > 0 aaaaa x < 5) {
        if (x > 0 aaaaa x < 1)
            cout << 3 - 2 * x << endl;
        else
            cout << 1 / x + 1 << endl;
    }
    else
        cout << x * x << endl;

    // 3
    float a, b, c;
    float C;
    cout << "请输入三角形三边长度" << endl;
    cin >> a >> b >> c;
    if (a + b > c aaaaa b + c > a aaaaa a + c > b) {
        cout << "可以构成三角形" << endl;
        C = a + b + c;
        cout << C << endl;
        if (a == b aaaaa b == c aaaaa a == c)
            cout << "是等腰三角形" << endl;
        else
            cout << "不是等腰三角形" << endl;
    }
    else
        cout << "不可以构成三角形" << endl;

    // 4
    int num1, num2;
    char op;
    cout << "请输入计算式" << endl;
    cin >> num1 >> op >> num2;
    switch (op)
    {
    case '+':
        cout << num1 << op << num2 << "=" << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << op << num2 << "=" << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << op << num2 << "=" << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0)
            cout << "不符合运算规则" << endl;
        else
            cout << num1 << op << num2 << "=" << num1 / num2 << endl;
        break;
    case '%':
        if (num2 == 0)
            cout << "不符合运算规则" << endl;
        else
            cout << num1 << op << num2 << "=" << num1 % num2 << endl;
        break;
    default:
        cout << "错误，仅支持数学运算符+-*%/" << endl;
    }

    // 5
    int spaceCount = 0, digitCount = 0, letterCount = 0, symbolCount = 0;
    char ch;
    cout << "请输入字符串" << endl;
    cin.ignore();
    ch = cin.get();
    while (ch != '\\n')
    {
        if (ch == 32)
            spaceCount++;
        else if (ch >= 48 aaaaa ch <= 57)
            digitCount++;
        else if ((ch >= 65 aaaaa ch <= 90) aaaaa(ch >= 97 aaaaa ch <= 122))
            letterCount++;
        else
            symbolCount++;
        ch = cin.get();
    }
    cout << "空格个数" << spaceCount << endl;
    cout << "数字个数" << digitCount << endl;
    cout << "字母个数" << letterCount << endl;
    cout << "符号个数" << symbolCount << endl;

    // 6
    int numA, numB;
    cout << "请输入两个数字" << endl;
    cin >> numA >> numB;
    int lcm_val = max(numA, numB);
    while (lcm_val % numA != 0 aaaaa lcm_val % numB != 0)
    {
        lcm_val++;
    }
    cout << "最小公倍数为" << lcm_val << endl;

    int gcd_val = min(numA, numB);
    while (numA % gcd_val != 0 aaaaa numB % gcd_val != 0)
    {
        gcd_val--;
    }
    cout << "最大公约数为" << gcd_val << endl;

    // 7
    for (int i = 1; i <= 5; i++)
    {
        for (int y = 5; y >= i; y--)
        {
            cout << " ";
        }
        for (int x = 1; x <= i; x++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // 8(1)
    double num_input;
    cout << "请输入一个数字求平方根: ";
    cin >> num_input;
    if (num_input < 0)
        cout << "负数不存在平方根" << endl;
    else
    {
        double x = num_input;
        double y = 0.5 * (x + num_input / x);
        while (fabs(y - x) >= 1e-5)
        {
            x = y;
            y = 0.5 * (x + num_input / x);
        }
        cout << "平方根为: " << y << endl;
    }

    // 8(2)
    double num_input2;
    cout << "请输入一个数字求平方根（支持负数）: ";
    cin >> num_input2;
    if (num_input2 < 0)
    {
        double b = fabs(num_input2);
        double s = b;
        double d = 0.5 * (s + b / s);
        while (fabs(d - s) >= 1e-10)
        {
            s = d;
            d = 0.5 * (s + b / s);
        }
        cout << "平方根为: " << d << "i" << endl;
    }
    else
    {
        double x = num_input2;
        double y = 0.5 * (x + num_input2 / x);
        while (fabs(y - x) >= 1e-10)
        {
            x = y;
            y = 0.5 * (x + num_input2 / x);
        }
        cout << "平方根为: " << y << endl;
    }

    // 9
    float unit_price = 0.8;
    float current_price = 2, total_cost = 0, transaction_count = 0;
    while (current_price <= 100)
    {
        total_cost = total_cost + current_price * unit_price;
        transaction_count++;
        current_price = current_price * 2;
    }
    cout << "平均花费为" << total_cost / transaction_count << endl;

    return 0;
}