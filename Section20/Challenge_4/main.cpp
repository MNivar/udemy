// Section 20
// Challenge 4
// Identifying palindrome strings using a stack and queue
#include <cctype>
#include <stack>
#include <queue>
#include <iostream>
#include <string>
#include <iomanip>
#include <string>

bool is_palindrome(const std::string& s)
{
    // You must implement this function.
    // Since we are learning the STL - use a stack and a queue to solve the problem.
    
    
  
    
    std::stack<char> stack {}; //stack is LIFO
    std::queue<char> q {}; //queue is FIFO
    
    for (char letter : s){
        
        if (std::isalpha(letter)){
           letter = toupper(letter); //toupper and tolower is used to compare char not string!!
           stack.push(letter);
           q.push(letter);
        }
    }
    
    while (stack.size() >1 ) 
        
        if (stack.top() == q.front()) { //the top() in a stack is the last one in, in queue front() is the first one in
                                        // so this is effectively comparing the first and last char
        stack.pop();
        q.pop();}
        
        else
            return false;
    

    return true;
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << " " << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}