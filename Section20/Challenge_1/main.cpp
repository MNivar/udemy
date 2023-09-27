// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

bool is_palindrome(const std::string& s)
{
    // You must implement this function.
    // Since we are learning the STL - use a deque to solve the problem.
    
//    std::string filteredString {s};
//    
//    filteredString.erase(std::remove_if(filteredString.begin(), filteredString.end(), [](char c) {
//        if (!std::isalpha(c)) 
//     
//                return c; //using a lambda expression to remove anything that is not alpha
//                
//         else
//                    ;
//        
//    }), filteredString.end());
//    
//    std::deque<char>frontLoaded {};
//    std::deque<char>backLoaded{};
//    
//    for (auto letter : filteredString){
//        
//        frontLoaded.push_front(tolower(letter));
//        backLoaded.push_back(tolower(letter));
//        
//    }
//    
//    if (frontLoaded == backLoaded)
//        return true;
//    
//    return false;
    
    // better implementation
    
    std::deque<char> d{};
    for (char letter : s) {
        if (std::isalpha(letter)){
            d.push_back(tolower(letter));
        }
    }
    
    
    
    char frontPop {};
    char backPop{};
    
// for (int i {0};i <= d.size(); ++i){
//     
//     std::cout<<" i is: "<< i <<std::endl;
//    
    while(d.size() > 1) {
     
     frontPop = d.front();
     backPop = d.back();
     
          if (frontPop != backPop)
               return false;
     
      d.pop_front();
      d.pop_back();
      

     

 }
 
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