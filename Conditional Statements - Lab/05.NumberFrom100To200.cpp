#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n<100) {
        cout << "Less than 100" << endl;
    }
    else if (n >= 100 && n <= 200){
        cout << "Between 100 and 200" << endl;
    }
    else {
        cout << "Greater than 200" << endl;
    }

    return 0;
}