#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<vector<int>> vec2d = {{1, 2, 3}, {4, 5, 6}};
    
    vec2d.push_back({9, 10, 11});   // Add new row
    vec2d[1].push_back(50);         // Add element to second row
    int len = vec2d.size();
    cout << len << endl;

    
    for (int i = 0; i < len; i++) {
        int len2 = vec2d[i].size();
        for (int j = 0; j < len2; j++) {
            cout << vec2d[i][j] << " ";
        }
        cout << endl;
    }
   vector<int> vec = {1, 2, 3, 4, 5};
    vec.insert(vec.begin() + 2, 10);   // Insert 10 at index 2

    // Print the whole vector
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;           // Print new first element

    list<int> l={1, 2, 3, 4, 5};
    l.push_back(6);          // Add 6 at the end
    l.push_front(10);     // Add 10 at the beginning

    auto it = l.begin();
    advance(it, 2);      // Move iterator to the 3rd position
    cout<<*it<<endl;

    l.earese(it);        // Remove element at 3rd position
    for (int val : l) {
        cout << val << " ";
    }
    cout << endl;


    return 0;
}
