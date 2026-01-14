#include <iostream>
using namespace std;

class Student {
public:
    int num;
    double score;

    Student(int n = 0, double s = 0.0) : num(n), score(s) {}
};

void max(Student* p) {
    Student* best = &p[0];
    for (int i = 1; i < 5; ++i) {
        if (p[i].score > best->score) {
            best = &p[i];
        }
    }
    cout << "Highest score student ID: " << best->num << endl;
}

int main() {
    Student students[5] = {
        Student(101, 88.5),
        Student(102, 92.0),
        Student(103, 78.5),
        Student(104, 95.5),
        Student(105, 89.0)
    };

    max(students);
    return 0;
}