#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int sec;

public:
    void setTime() {
        cin >> hour >> minute >> sec;
    }

    void showTime() {
        cout << hour << ":" << minute << ":" << sec << endl;
    }
};

int main() {
    Time t1;
    t1.setTime();
    t1.showTime();
    return 0;
}