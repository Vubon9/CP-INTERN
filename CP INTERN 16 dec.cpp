#include <bits/stdc++.h>
using namespace std;

// Function must be OUTSIDE main
void viewStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main()
{
    // Deque
    deque<int> deq = {20, 10, 40, 30};
    deq.push_back(80);
    cout << deq[4] << endl;

    deq.push_front(100);
    cout << deq[0] << endl;

    deq.pop_back();

    for (auto it : deq) {
        cout << it << " ";
    }
    cout << endl;

    for (int i = 0; i < deq.size(); i++) {
        cout << deq[i] << " ";
    }
    cout << endl;

    for (auto i = deq.begin(); i != deq.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;

    // Queue
    queue<int> q;
    q.push(6);
    q.push(90);
    q.push(30);

    cout << q.front() << endl;
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    // Stack
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << endl;
    st.pop();

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    // Stack using function
    stack<int> st2;
    st2.push(1);
    st2.push(2);
    st2.push(3);
    viewStack(st2);

    return 0;
}
