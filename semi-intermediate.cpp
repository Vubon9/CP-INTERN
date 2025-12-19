#include<bits/stdc++.h>
using namespace std;

void view(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

void view(stack<int> q){
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main()
{
    ///Deque
    ///queue
    ///Stack
    ///Double ended queue
    deque<int> deq={20, 10, 40, 30};

    deq.push_back(80);///20, 10, 40, 30, 80
    cout<<deq[4]<<endl;///80

    deq.push_front(100);///100, 20, 10, 40, 30, 80
    cout<<deq[0]<<endl;///100

    deq.pop_back();///100, 20, 10, 40, 30
    deq.pop_front();///20, 10, 40, 30

    for(auto it: deq){
        cout<<it<< " ";
    }
    cout<<endl;

    for(int i=0; i<deq.size(); i++){
        cout<<deq[i]<< " ";
    }

    for(auto i=deq.begin(); i!=deq.end(); i++){
        cout<<*i<< " ";
    }

    cout<<endl;
    ///queue
    queue<int> q;
    ///FIFO
    ///6 4 2 5

    q.push(6);  q.push(4);  q.push(2);  q.push(5);
    ///cout<<q.front();
    /**while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    **/
    view(q);
    ///call by value
    cout<<q.front()<<endl;///6

    stack<int> s;
    s.push(6);  s.push(4);  s.push(2);  s.push(5);
    cout<<s.top()<<endl;
    /**while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }**/
    view(s);

    return 0;
}
