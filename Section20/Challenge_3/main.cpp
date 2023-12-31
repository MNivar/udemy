// Section 20
// Challenge 3  
// Maps and Sets

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <string>
#include <iomanip>
#include <array>
#include <string>

// Used for Part1
// Display the word and count from the 
// std::map<std::string, int>

void display_words(const std::map<std::string, int> &words) {
    std::cout << std::setw(12) << std::left << "\nWord"
                << std::setw(7) << std::right << "Count"<< std::endl;
    std::cout << "===================" << std::endl;
    for (auto pair: words)
        std::cout << std::setw(12) << std::left << pair.first 
                       << std::setw(7) << std::right << pair.second << std::endl;
}

// Used for Part2
// Display the word and occurences from the 
// std::map<std::string, std::set<int>>

void display_words(const std::map<std::string, std::set<int>> &words)
{
     std::cout << std::setw(12) << std::left << "\nWord"
                << "Occurrences"<< std::endl;
    std::cout << "=====================================================================" << std::endl;
    for (auto pair: words) {
        std::cout << std::setw(12) << std::left << pair.first 
                       << std::left << "[ ";
        for (auto i: pair.second) 
            std::cout << i << " ";
        std::cout << "]" << std::endl;
    }
}

// This function removes periods, commas, semicolons and colon in 
// a string and returns the clean version
std::string clean_string(const std::string &s) {
    std::string result;
    for (char c: s) {
        if (c == '.' || c == ',' || c == ';' || c == ':')
            continue;
        else
            result += c;
    }
    return result;
}

// Part1 process the file and builds a map of words and the 
// number of times they occur in the file

void part1() {
    std::map<std::string, int> words;
    std::string line;       
    std::string word;   
    
    
    std::ifstream in_file {"../words.txt"};
    if (in_file) {
        
       while ( in_file >> word) {
           
           word = clean_string(word);
           
           words[word]++; //if the key does not exist it will be created!!!
           
//           if (words.count(word) == 0){
//               words.insert( std::pair<std::string, int>(word, 1));
//           }
//           else {
//               
//               auto it = words.find(word);
//               if (it != words.end()){
//                   it->second = ++(it->second);
//               }
//           }
           
       }
        
        
        
        // You implement this code
        
        in_file.close();
        display_words(words);
    } else {
        std::cerr << "Error opening input file" << std::endl;
    }
}
    
// Part2 process the file and builds a map of words and a 
// set of line numbers in which the word appears
void part2() {
    std::map<std::string, std::set<int>> words;
    std::string line;
    std::string word;
    int line_counter {0};
    std::ifstream in_file {"../words.txt"};
    if (in_file) {
        
        while (getline(in_file, line) ){
            
            ++line_counter;
            
            std::stringstream s(line);

            while ( s >> word){
           // std::cout << word <<std::endl;
            
             word = clean_string(word);
             
             
             words[word].insert(line_counter); //if the key does not exist it will be created!! Then, use insert to insert a value into the set
           
//           if (words.count(word) == 0){
//               words.insert( std::pair<std::string, std::set<int>>(word, {line_counter}));
//           }
//           else {
//               
//               auto it = words.find(word);
//               if (it != words.end()){
//                   it->second.insert(line_counter);
//               }
//           }
            }
            
            
        }
        
        
        
        
        
     
        // You implement this code
        
        in_file.close();
        display_words(words);
    } else {
        std::cerr << "Error opening input file" << std::endl;
    }
}

int main() {
   // part1();
    //part2();
    
    //leetcode practice
    
    
    std::string allowed {"ab"};
    
    std::array<std::string, 5> arr1 {"ad","bd","aaab","baa","badab"}; 
    
    bool found = true;
   int counter {0};
     
    
    for (auto word: arr1){
        for (auto letter : word) {
           if( (allowed.find(letter)) ==std::string::npos ) { 
               found = false;
               break;}
        }
        
        if (found) 
            ++counter;
        found = true;
    }
    
    std::cout<<"the number of times is: " << counter <<std::endl;
    return 0;
    
    
    
}

