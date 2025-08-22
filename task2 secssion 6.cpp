#include <iostream>
#include <vector>
using namespace std;

// Function to add a value to each element in the vector
void addValue(vector<int> &v, int value) {
    for (int &num : v) {
        num += value;  // نزيد كل عنصر بالقيمة المعطاة
    }
}

int main() {
    // إنشاء vector
    vector<int> numbers = {1, 2, 3};

    // استدعاء الدالة لإضافة 5 إلى كل عنصر
    addValue(numbers, 5);

    // طباعة الـ vector بعد التعديل
    cout << "Updated vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
