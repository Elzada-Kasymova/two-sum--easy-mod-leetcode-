#include <iostream>
using namespace std;
int main() {
    int nums[] = {3,3};
    int target = 6;
    int getArrayLength = sizeof(nums) / sizeof(int);

    for (int i = 0; i < getArrayLength; i++) {
        cout << nums[i] << " ";
    }

    cout << '\n';

    for (int j = 0; j < getArrayLength; j++) {
        for (int n = j + 1; n < getArrayLength; n++) {
            if (nums[j] + nums[n] == target) {
                cout << "[" << j << "," << n << "] ";
            }
        }
    }

    return 0;
}
