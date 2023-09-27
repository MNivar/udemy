// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


bool word_search(const std::string &word, const std::string &find_word);


int main() {
    std::ifstream in_file;
    std::string find_word {};
    std::string word {};
    int match_count {0};
    int word_count {0};
    bool search_on {true};
    char user_input {};

    
    in_file.open("../romeoandjuliet.txt");
        if (!in_file) {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }


while (search_on) {
    
    std:cout<<"Welcome to word search\n"
              "s= start word search\n"
              "q=quit"<< std::endl;
              
              
    std::cin>>user_input;
    
    if (user_input=='s') {
            
        std::cout<<"enter a word to search"<<std::endl;
        std::cin>>find_word;
    
    
        while(in_file >> word) {
            ++word_count;
            if (word_search(word, find_word)) 
                ++match_count;
        
    }

        std::cout<<"Out of " << word_count<<" words." <<" The word: " << find_word<< " was found "<<match_count<<" times" <<std::endl;
        in_file.clear();
        in_file.seekg(0,ios::beg);
        match_count = 0;
        word_count = 0;
    
    }
    
    else if (user_input=='q') {
        std::cout<<"quitting..."<<std::endl;
        search_on = false;
        
    }
    
    else
        std::cout<<"Invalid input"<<std::endl;
    
}


   
    return 0;
}




bool word_search(const std::string &word,const std::string &find_word) {
    
    size_t found = word.find(find_word);
    if (found!= string::npos)
        return true;
    else
        return false;


    
}