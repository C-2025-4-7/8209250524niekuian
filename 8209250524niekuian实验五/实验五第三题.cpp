#include <iostream>
using namespace std;

class Cuboid {
private:
    double length, width, height;

public:
    void input() {
        cin >> length >> width >> height;
    }

    double volume() {
        return length * width * height;
    }

    void output() {
        cout << "Volume: " << volume() << endl;
    }
};

int main() {
    Cuboid c[3];
    for (int i = 0; i < 3; ++i) {
        c[i].input();
    }
    for (int i = 0; i < 3; ++i) {
        c[i].output();
    }
    return 0;
}