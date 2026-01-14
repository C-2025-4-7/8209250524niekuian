#include <iostream>
#include <cstring>
#include "student.h"
using namespace std;

void Student::display() {
    cout << "num£º" << num << endl;
    cout << "name£º" << name << endl;
    cout << "sex£º" << sex << endl;
}

void Student::set_value(int n, const char* nm, char s) {
    num = n;
    strcpy(name, nm);
    sex = s;
}