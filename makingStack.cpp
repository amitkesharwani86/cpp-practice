#include<bits/stdc++.h>
using namespace std;

class myStack {
private:
    vector<int> arr;
    int top = -1;
    
public:
    void push(int data) {
        arr.push_back(data);
        top++;
    }

    void pop() {
        if(top == -1) {
            cout << "Stack is empty! " << endl;
            return ;
        }
        arr.pop_back();
        top--;
    }

    int top() {
        if(top == -1) {
            cout << "Stack is empty! " << endl;
            return -1e9;
        }

        return arr[top];
    }
};

int main() {
    myStack* s1 = new myStack();
}