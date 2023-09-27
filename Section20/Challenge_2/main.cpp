// Section 20
// Challenge 2
//  Lists

#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>

class Song {
    friend std::ostream &operator<<(std::ostream &os, const Song &s);
    std::string name;
    std::string artist;
    int rating;
public:
    Song() = default;
    Song(std::string name, std::string artist, int rating)
            : name{name}, artist{artist}, rating{rating} {}
    std::string get_name() const {
        return name;
    }
    std::string get_artist() const {
        return artist;
    }
    int get_rating() const {
        return rating;
    }
    
    bool operator<(const Song &rhs) const  {
        return this->name < rhs.name;
    }
    
    bool operator==(const Song &rhs) const  {
        return this->name == rhs.name;
    }
};

std::ostream &operator<<(std::ostream &os, const Song &s) {
    os << std::setw(20) << std::left << s.name
       << std::setw(30) << std::left << s.artist
       << std::setw(2) << std::left << s.rating;
       return os;
}

void display_menu() {
    std::cout << "\nF - Play First Song" << std::endl;
    std::cout << "N - Play Next song" << std::endl;
    std::cout << "P - Play Previous song" << std::endl;
    std::cout << "A - Add and play a new Song at current location" << std::endl;
    std::cout << "L - List the current playlist" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song &song) {
    // This function should display 
    // Playing: followed by the song that is playing
   
  
    
    std::cout << "Playing:\n" << song <<std::endl;
}

void display_playlist(const std::list<Song> &playlist, const Song &current_song) {
    // This function should display the current playlist 
    // and then the current song playing.
    
  
    
    for (auto song: playlist){
        
        std::cout << song << std::endl;
    
        
        
    }
    
    std::cout<<" ====================================================" <<std::endl;
    
    //std::cout <<" Current Song Playing:\n " << current_song<<std::endl;
    
    play_current_song(current_song);
    
}



int main() {

    std::list<Song> playlist{
            {"God's Plan",        "Drake",                     5},
            {"Never Be The Same", "Camila Cabello",            5},
            {"Pray For Me",       "The Weekend and K. Lamar",  4},
            {"The Middle",        "Zedd, Maren Morris & Grey", 5},
            {"Wait",              "Maroone 5",                 4},
            {"Whatever It Takes", "Imagine Dragons",           3}          
    };
    

    std::list<Song>::iterator current_song = playlist.begin();
    
    
    
    char user_input {};
    bool playlist_on {true};
    
  
    // Your program logic goes here
    
    display_playlist(playlist, *current_song);
    
    
    
    
    
    
    while (playlist_on) {
        
        
    display_menu();
    user_input = toupper(std::cin.get());
    
    
    
    
    if (user_input == 'F'){
        current_song = playlist.begin();
        
        std::cout <<"Playing the first song:\n " <<  *current_song << std::endl;
    }
    
    else if (user_input == 'N'){
        if (current_song != playlist.end())
               ++current_song;
        else
            current_song = playlist.begin();
            
          std::cout <<"Playing the next song:\n " <<  *current_song << std::endl;
    }
    
    else if( user_input == 'P'){
        
        if (current_song != playlist.begin()) {
                --current_song;
        std::cout<<"AAAA" <<std::endl;}
                else {
                    current_song = --playlist.end(); // what does .end() refer to exactly?
                }
                    
                std::cout <<"Playing the previous song:\n " <<  *current_song << std::endl;
                    
                  
     }
     
     else if( user_input == 'A') {
         
         std::string artist {};
         std::string song_name {};
         int rating {};
         
         
         std::cout << "Adding and playing a new song" << std::endl;
         
         std::cout <<"Enter song name: " << std::endl;
         
         std::getline(std::cin>>std::ws, song_name);
         
         std::cout<<"Enter song artist: " << std::endl;
         
         std::getline(std::cin>>std::ws, artist);

         std::cout<<"Enter a rating (1-5)"<< std::endl;
  
         
         std::cin >> rating;
         
        
         
         playlist.emplace(current_song, song_name, artist,  rating);
         
         --current_song;
         
         std::cout <<"Playing the added song:\n " <<  *current_song << std::endl;
         
         
         
         
         
         
         
         
         
         
     }
     
     else if (user_input == 'L') {
         
         display_playlist(playlist, *current_song);
         
     }
     
     else if (user_input == 'Q') {
         
         std::cout <<"You have closed the playlist." << std::endl;
         
         playlist_on = false;
     }
     
     else 
         std::cout<<"Please enter a valid selection" << std::endl;
     
  


  


    }
        
        
    
    
    
    
    
    
    
    
    

    std::cout << "Thanks for listening!" << std::endl;
    return 0;
}