#include <iostream>
using namespace std;
void sortArray(int* arr, int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "请输入数组元素个数: ";
    cin >> n;
    if (n <= 0) {
        cout << "元素个数必须大于0！" << endl;
        return 1;
    }

    int* arr = new int[n];

    cout << "请输入 " << n << " 个整数: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "\n排序前: ";
    for (int i = 0; i < n; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    sortArray(arr, n);

    cout << "排序后: ";
    for (int i = 0; i < n; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    delete[] arr;
    arr = nullptr;

    return 0;
}