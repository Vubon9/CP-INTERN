
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
int main(){
    Node*head= new Node{10,NULL};
    head->next=new Node{20,NULL};   
    head->next->next=new Node{30,NULL};
    int sum=0;
    Node*temp=head;
    while(temp!=NULL){
        sum+=temp->data;
        temp=temp->next;
    }   
    cout<<"Sum is:"<<sum<<endl;
    return 0;
}
//Searh in a Link list using while loop 
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
int main(){
    Node*head= new Node{10,NULL};
    head->next=new Node{30,NULL};
    head->next->next= new Node{90,NULL};

    int key;
    cout<<"Enter the key:"<<endl;
    cin>> key;

    Node*temp = head;
    bool found= false;
    while(temp!=NULL){
        if(temp->data==key){
            found= true;
            break;
        }
        temp=temp->next;

    }
    if(found){
        cout<<"FOUND";
    }
    else{
        cout<<"NOT FOUND";

}
return 0;
}
    

//counting nodes in link list using while loop
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*next;
};
int main(){
    Node*head=new Node{10,NULL};
    head->next=new Node{20,NULL};
    head->next->next=new Node{30,NULL};

    int count=0;
    Node*temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    cout<<"Count of nodes:"<<count<<endl;
    return 0;
}

//Find max in link list using while loop
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*next;
};
int main(){
    Node*head=new Node{20,NULL};
    head->next=new Node{50,NULL};
    head->next->next=new Node{10,NULL}; 
    head->next->next->next=new Node{40,NULL};
    
    Node*temp=head;
    int maxValue= temp->data;
    while(temp!=NULL){
        if(temp->data>maxValue){
            maxValue=temp->data;
        }
        temp=temp->next;
    }
    cout<<"Max value:"<<maxValue<<endl;
    return 0;
}


//Minimum in link list using while loop
#include<bits/stdc++.h>
using namespace std;    
struct Node{
    int data;
    Node*next;
};
int main(){
    Node*head=new Node{20,NULL};
    head->next=new Node{50,NULL};
    head->next->next=new Node{10,NULL};
    head->next->next->next=new Node{40,NULL};

    Node*temp=head;
    int minValue=temp->data;
    while(temp!=NULL){
        if(temp->data<minValue){
            minValue=temp->data;
        }
        temp=temp->next;
    }
    cout<<"Min value:"<<minValue<<endl;
    return 0;
}

//inserting Node at the fast 
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = NULL;
    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    int i = 0;
    while (i < n) {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> value;

       
        Node* newNode = new Node();
        newNode->data = value;

      
        newNode->next = head;
        head = newNode;

        i++;
    }

    cout << "\nLinked list: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    return 0;
}
///counting number, space, alphabet and special character
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int alphabet = 0, digit = 0, space = 0, special = 0;

    int i = 0;
    while (str[i] != '\0') {
        char ch = str[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            alphabet++;
        }
        else if (ch >= '0' && ch <= '9') {
            digit++;
        }
        else if (ch == ' ') {
            space++;
        }
        else {
            special++;
        }

        i++;
    }

    cout << "Alphabets: " << alphabet << endl;
    cout << "Digits: " << digit << endl;
    cout << "Spaces: " << space << endl;
    cout << "Special Characters: " << special << endl;

    return 0;
}
///Alphabet Count 
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int alphabet = 0;
    int i = 0;

    while (str[i] != '\0') {
        char ch = str[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            alphabet++;
        }

        i++;
    }

    cout << "Total Alphabets: " << alphabet << endl;

    return 0;
}
///count array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int count = 0;

    int i = 0;
    while (i < 5) {
        count++;
        i++;
    }

    cout << "Total elements = " << count;
}
///Count Even and odd array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 8, 9};
    int even = 0, odd = 0;

    int i = 0;
    while (i < 7) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
        i++;
    }

    cout << "Even = " << even << endl;
    cout << "Odd = " << odd << endl;
}
///Count Positive, Negative & Zero
#include <iostream>
using namespace std;

int main() {
    int arr[] = {-3, 0, 5, 7, -1, 0, 9};
    int pos = 0, neg = 0, zero = 0;

    int i = 0;
    while (i < 7) {
        if (arr[i] > 0) pos++;
        else if (arr[i] < 0) neg++;
        else zero++;
        i++;
    }

    cout << "Positive = " << pos << endl;
    cout << "Negative = " << neg << endl;
    cout << "Zero = " << zero << endl;
}
///Count number alphabet with negative number 
#include <iostream>
#include <string>
using namespace std;

int main() {

    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int alphabet = 0, digit = 0, space = 0, special = 0;

    int i = 0;
    while (str[i] != '\0') {

        char ch = str[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            alphabet++;

        else if (ch >= '0' && ch <= '9')
            digit++;

        else if (ch == ' ')
            space++;

        else
            special++;

        i++;
    }

    cout << "Alphabets = " << alphabet << endl;
    cout << "Digits = " << digit << endl;
    cout << "Spaces = " << space << endl;
    cout << "Special Characters = " << special << endl;

    return 0;
}
///Reverse String 
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string rev = "";
    int i = str.length() - 1;

    while (i >= 0) {
        rev += str[i];
        i--;
    }

    cout << "Reversed string: " << rev << endl;

    return 0;
}
///Palidrome sting 
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int i = 0;
    int j = str.length() - 1;
    bool isPalindrome = true;

    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}


#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    virtual void f(){
        cout<< "Hello Lover boy";
    }
    
};
class B: public A{
    public:
    void f(){
        cout<<"Hello Lover boysss";
    }
};
int main(){
    A*B;
    B b;
    a=&b;
    a->f();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};
int main() {
    Node* head = NULL;
    int n, value;

    cout << "How many nodes? ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> value;
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    cout << "\nCurrent List: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    int pos;
    cout << "\n\nEnter value to insert: ";
    cin >> value;
    cout << "Enter position: ";
    cin >> pos;

    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
    } 
    else {
        temp = head;
        for (int i = 1; i < pos - 1; i++) {
            if (temp == NULL) {
                cout << "Invalid Position!";
                return 0;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    cout << "\nUpdated List: ";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
    return 0;
}///at any position adding node in link list
#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
};
int main() {
    Node* head = NULL;
    int n, value;

    cout << "How many nodes? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> value;
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }
    cout << "\nCurrent List: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    int pos;
    cout << "\n\nEnter value to insert: ";
    cin >> value;
    cout << "Enter position: ";
    cin >> pos;

    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    // Case 1: insert at head (pos = 1)
    if (pos == 1) {
        newNode->next = head;
        head = newNode;
    }
    else {
        temp = head;
        for (int i = 1; i < pos - 1; i++) {
            if (temp == NULL) {
                cout << "Invalid Position!";
                return 0;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    cout << "\nUpdated List: ";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
    return 0;
}
//stack implementation using 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int stackArr[5];  
    int top = -1;    

    // PUSH (insert)
    top++;
    stackArr[top] = 10;

    top++;
    stackArr[top] = 20;

    top++;
    stackArr[top] = 30;

    // DISPLAY
    cout << "Stack: ";
    for (int i = top; i >= 0; i--) {
        cout << stackArr[i] << " ";
    }
    cout << endl;

    // POP (remove)
    cout << "Popped: " << stackArr[top] << endl;
    top--;

    // DISPLAY AFTER POP
    cout << "Stack after pop: ";
    for (int i = top; i >= 0; i--) {
        cout << stackArr[i] << " ";
    }
    cout << endl;

    return 0;
}
////delete at any position 
#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
};
int main() {
    Node* head = NULL;
    int n, value;
    cout << "How many nodes:";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> value;
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }
    cout << "\nCurrent List: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    int pos;
    cout << "\nEnter position to delete: ";
    cin >> pos;

    if (pos == 1) {
        Node* del = head;
        head = head->next;
        delete del;
    }
    else {
        temp = head;
        for (int i = 1; i < pos - 1; i++) {
            if (temp == NULL) {
                cout << "Invalid Position!" << endl;
                return 0;
            }
            temp = temp->next;
        }

        if (temp == NULL || temp->next == NULL) {
            cout << "Invalid Position!" << endl;
            return 0;
        }

        Node* del = temp->next;
        temp->next = temp->next->next;
        delete del;
    }
    cout << "\nUpdated List: ";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
    return 0;
}
///stack arrya implementation
#include <bits/stdc++.h>
using namespace std;

int main() {
    int stackArr[5];  
    int top = -1;    

    // PUSH (insert)
    top++;
    stackArr[top] = 10;

    top++;
    stackArr[top] = 20;

    top++;
    stackArr[top] = 30;

    // DISPLAY
    cout << "Stack: ";
    for (int i = top; i >= 0; i--) {
        cout << stackArr[i] << " ";
    }
    cout << endl;

    // POP (remove)
    cout << "Popped: " << stackArr[top] << endl;
    top--;

    // DISPLAY AFTER POP
    cout << "Stack after pop: ";
    for (int i = top; i >= 0; i--) {
        cout << stackArr[i] << " ";
    }
    cout << endl;

    return 0;
}
///Use stck balconing to check for balanced parentheses in an expression
#include <bits/stdc++.h>
using namespace std;
bool isBalanced(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        else {
            if (st.empty()) return false;

            char top = st.top();
            if ((c == ')' && top == '(') ||
                (c == '}' && top == '{') ||
                (c == ']' && top == '[')) {
                st.pop();
            } else {
                return false;
            }
        }
    }
    return st.empty();
}
int main() {
    string s;
    cout << "Enter expression: ";
    cin >> s;

    if (isBalanced(s))
        cout << "Balanced\n";
    else
        cout << "Not Balanced\n";
}
////middle delete at stack
#include <bits/stdc++.h>
using namespace std;

void deleteMiddle(stack<int> &st, int current, int mid) {
    if (st.empty()) return;
    if (current == mid) {
        st.pop();
        return;
    }
    
    int temp = st.top();
    st.pop();
    deleteMiddle(st, current + 1, mid);
    st.push(temp);
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    int size = st.size();
    int mid = size / 2;

    deleteMiddle(st, 0, mid);

    cout << "Stack after deleting middle: ";
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
}
///in order traversal of binary tree 
#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Inorder: ";
    inorder(root);

    return 0;
}
///Pre order traversal of binary tree
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

void preorder(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Preorder: ";
    preorder(root);

    return 0;
}
///post order traversal of binary tree
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

void postorder(Node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Postorder: ";
    postorder(root);

    return 0;
}
///binary srech tree search
#include <bits/stdc++.h>
using namespace std;        
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};  
bool searchBST(Node* root, int key) {
    if (root == NULL) return false;
    if (root->data == key) return true;
    if (key < root->data)
        return searchBST(root->left, key);
    else
        return searchBST(root->right, key);
}
int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);

    int key;
    cout << "Enter key to search: ";
    cin >> key;

    if (searchBST(root, key))
        cout << "Key found in BST.\n";
    else
        cout << "Key not found in BST.\n";

    return 0;
}
