#include <bits/stdc++.h>
using namespace std;

class Distance {
public:
    int length, breadth;
    Distance operator - (Distance ob1) {
        Distance temp;
        temp.length = length - ob1.length;
        temp.breadth = breadth - ob1.breadth;
        return temp;
    }
};

int main() {
    Distance ob1, ob2, ob3;

    cin >> ob1.length >> ob1.breadth;
    cin >> ob2.length >> ob2.breadth;

    ob3 = ob1 - ob2;
    cout << ob3.length << " " << ob3.breadth;

    return 0;
}
