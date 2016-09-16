#include <iostream>
#include<queue>
#include<stack>
using namespace std;

class Solution {
    private:
        stack<char> myStack;
        queue<char> myQueue;
        
    public:
        void pushCharacter(char ch){myStack.push(ch);}
        void enqueueCharacter(char ch){myQueue.push(ch);}
        char popCharacter(){
            char ch_=myStack.top();
            myStack.pop();
            return ch_;
        }
        char dequeueCharacter(){
            char ch_=myQueue.front();
            myQueue.pop();
            return ch_;
        } //Write your code here

};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}
