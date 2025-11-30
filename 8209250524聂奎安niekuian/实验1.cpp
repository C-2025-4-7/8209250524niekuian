# include <iostream>
using namespace std;
#include <iomanip>
#define Pi 3.14
int main()
{
    //1
	int k=1;
	int i = k + 1;
	cout << i << endl;
	int a = 1;
	cout << a << endl;
	cout << "Welcome to C++" << endl;
    //2
	int r, h;
	cout << "请输入圆锥的高和半径" << endl;
	cin >> h >> r;
	int V = (r * r * Pi * h)/3;
	cout << "圆锥的体积是" <<V<<endl ;
    //3
	cout << "char length:" << sizeof(char) << endl;
	cout << "int length:" << sizeof(int) << endl;

        unsigned int testUnint = 65534; // 0xfffe
//4
        cout << "output in unsigned int type: " << testUnint << endl;
        cout << "output in char type: " << static_cast<char>(testUnint) << endl;
        cout << "output in short type: " << static_cast<short>(testUnint) << endl; // 为什么结果为-2?
        cout << "output in int type: " << static_cast<int>(testUnint) << endl;
        cout << "output in double type: " << static_cast<double>(testUnint) << endl;
        cout << "output in double type: " << setprecision(4) << static_cast<double>(testUnint) << endl;
        cout << "output in Hex unsigned int type: " << hex << testUnint << endl; // 16进制输出

        // 按8进制输出
        cout << "output in Oct unsigned int type: " << oct << testUnint << endl;

        // 将一个实数转换成int
        double realNum = 123.789;
        cout << "real number: " << realNum << endl;
        cout << "convert to int: " << static_cast<int>(realNum) << endl;
//5
        int F, t;
        cout << "请输入华氏温度" << endl;
        cin >> F ;
        t = (F - 32) / 1.8;
        cout << "转化为摄氏温度为" << t << endl;

        return 0;
}