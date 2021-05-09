#include <iostream>
#include <queue>
#include <string>
#include <conio.h>

/*  Source by Manoj Debnath on CodeGuru
    Modified for Learn by Rizky Khapidsyah */

using namespace std;

int main() {

    priority_queue<int> nums;

    nums.push(9);
    nums.push(2);
    nums.push(7);
    nums.push(1);
    nums.push(4);

    cout << "Size of the stack : " << nums.size() << endl;

    while (!nums.empty()) {
        cout << nums.top() << endl;
        nums.pop();
    }

    _getch();
    return 0;
}