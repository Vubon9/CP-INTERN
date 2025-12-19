#include<bits/stdc++.h>
using namespace std;

int main()
{
    ///set, unordered_set, multiset
    ///map, unordered_map, multimap

    set<int> st;///sorts in ascending order
    ///set<int, greater<int>> st;///sorts in descending order
    st.insert(5); st.insert(6); st.insert(2); st.insert(8);
    ///2 5 6 8
    ///8 6 5 2
    cout<<*st.begin()<<endl;
    cout<<*st.rbegin()<<endl;

    for(auto it: st){
        cout<<it<<" ";
    }
    cout<<endl;

    st.insert(6);///2 5 6 6 8
    cout<<st.size()<<endl;///number of unique elements

    unordered_set<int> st2;///keep uniques, not sorted
    st2.insert(5); st2.insert(5); st2.insert(2); st2.insert(8);

    for(auto it: st2){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<st2.size()<<endl;

    ///5 5 7 7 3 4 4 2
    ///2 3 4 4 5 5 7 7

    multiset<int> st3;
    ///multiset<int, greater<int>> st3;
    st3.insert(5); st3.insert(5); st3.insert(2); st3.insert(8);

    for(auto it: st3){
        cout<<it<<" ";
    }
    cout<<endl;


    pair<int, int> p;
    p={4,7};
    cout<<p.first<<" "<<p.second<<endl;

    map<int, int> mp;
    cout<<"Key Value\n--- -----\n";
    mp[3]=2;
    mp.insert({2,2});
    mp[4]=5;
    mp[3]=6;///overwrite

    for(auto it: mp){
        cout<<it.first<< "\t" <<it.second<<endl;
    }

    cout<<mp[3]<<" "<<mp[10]<<endl;///6 0

    ///3 3 4 4 1 1
    ///3-->2, 4-->3, 1-->4

    map<int, int> mp2;
    /**for(int i=0; i<6; i++){
        int v;
        cin>>v;///3 4 4 4 1 1
        mp2[v]++;///mp2[4]++
    }

    for(auto it: mp2){
        cout<<it.first<< "\t" <<it.second<<endl;
    }**/

    unordered_map<int, int> mp3;
    for(int i=0; i<6; i++){
        int v;
        cin>>v;///3 4 4 4 1 1
        mp3[v]++;///mp2[4]++
    }

    for(auto it: mp3){
        cout<<it.first<< "\t" <<it.second<<endl;
    }

    if(mp3[3]==0) cout<<"Not found\n";
    else cout<<"Found\n";


    return 0;
}
