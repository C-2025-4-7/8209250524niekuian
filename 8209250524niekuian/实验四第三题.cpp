#include<iostream>
using namespace std;

int main()
{
    int count = 100;
    bool box[100] = { 0 };

    for (int student = 1; student <= count; student++)
    {
        for (int lock = student - 1; lock < count; lock += student)
        {
            box[lock] = !box[lock];
        }
    }

    cout << "开着的储物柜：" << endl;
    int openCount = 0;
    for (int i = 0; i < count; i++)
    {
        if (box[i])
        {
            cout << i + 1 << " ";
            openCount++;
        }
    }
    cout << endl << "总共有 " << openCount << " 个储物柜开着" << endl;

    return 0;
}