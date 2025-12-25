#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>st;
    st.insert(5);
    st.insert(6);
    st.insert(2);
    st.insert(8);
    cout<<*st.begin()<<endl;   ///output by default sorted descending order
    cout<<*st.rbegin()<<endl;
    for(auto it:st){
        cout<<it<< " ";
    }
    cout<<endl;
    st.insert(6);
   cout<<st.size()<<endl;
    unordered_set<int> st2;
    st2.insert(5);
    st2.insert(5);
    st2.insert(2);
    st2.insert(8);
    for(auto it:st2){
        cout<<it<<" ";
    }
    cout<<endl;

    return 0;

}
