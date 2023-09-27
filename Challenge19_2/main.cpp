// Section 19
// Challenge 2
// Automated Grader
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void grade_it(std::string file_name);

int main() {
    
    grade_it("../responses.txt");
    
    return 0;
}

void grade_it(string file_name) {
    
    std::ifstream in_file;
    in_file.open(file_name);
    
    if (!in_file) {
        std::cout<<"Error opening file"<<std::endl;
    }
    
    std::string key;
    

    
    std::string name;
    std::string response;
    int total_students {0};
    vector <std::string> names;
    vector <std::string> responses;

    
    vector <int> scores;
    int correct_ans {0};
    double total {0};
    
    
    

    
   // in_file>>key>>student1>>student1A>>student2>>student2A>>student3>>student3A>>student4>>student4A>>student5>>student5A;
   in_file>>key;
    while (in_file>>name>>response) {
//    std::cout<<key[0]<<std::endl;
//    vector <std::string> students {student1,student2,student3,student4,student5};
//    vector <std::string> answers {student1A,student2A,student3A,student4A,student5A};
        ++total_students;
        names.push_back(name);
        responses.push_back(response);
//        std::cout<<name<<"**"<<response<<std::endl;
    }

    
    
    for (int i{0};i<names.size(); ++i) {
//        std::cout<<names[i]<<std::endl;
//        std::cout<<responses[i]<<std::endl;
            for (int j{0}; j< key.length(); ++j) {
                if (responses[i][j] == key [j]) {
                    ++correct_ans;

            }
        
            
        }
//        std::cout<<correct_ans<<" for " << names[i]<<std::endl;
        scores.push_back(correct_ans);
        total+= correct_ans;
        correct_ans=0;
    }
    

//    
    std::cout<<"Student                                      Score"<<std::endl;
    std::cout<<"=================================================="<<std::endl;
    for (int i{0}; i< names.size(); ++i) {
        size_t blank_space {50-names[i].length()};
        std::cout<<names[i]<<std::setw(blank_space)<<std::right<<scores[i]<<std::setfill(' ')<<std::endl;
    }
    
    std::cout<<"=================================================="<<std::endl;
    std::cout<<"Average Score" <<std::setw(50-13)<<std::right<<(total/total_students)<<std::setfill(' ')<<std::endl;           


        
        
in_file.close();
    
    
}