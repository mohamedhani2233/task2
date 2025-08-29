#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int* arr = new int[N];
    for (int i = 0; i < N; i++) {
        arr[i] = 2 * (i + 1);
    }
    cout << "العناصر في المصفوفة: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}
