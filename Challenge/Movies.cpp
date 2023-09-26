/******************************************************************
 * Section 13 Challenge
 * Movies.h
 * 
 * Models a collection of Movies as a std::vector
 * 
 * ***************************************************************/
#include <iostream>
#include "Movies.h"

 /*************************************************************************
    Movies no-args constructor
**************************************************************************/
Movies::Movies() {
}

/*************************************************************************
    Movies destructor
**************************************************************************/
Movies::~Movies() {
}

  /*************************************************************************
    add_movie expects the name of the move, rating and watched count
    
    It will search the movies vector to see if a movie object already exists
    with the same name. 
    
    If it does then return false since the movie already exists
    Otherwise, create a movie object from the provided information
    and add that movie object to the movies vector and return true
    *********************************************************************/
bool Movies::add_movie(std::string name, std::string rating, int watched) {
    // you implement this method
    for (const Movie &movie :movies) { // pass by reference. for every movie in t
        if(movie.get_name() == name)
            return false;}
    Movie temp {name,rating,watched}; //creates an instance of the movie class
    movies.push_back(temp); //adding an additional object to vector
    return true; 
}

 /*************************************************************************
    increment_watched expects the name of the move to increment the
    watched count
    
    It will search the movies vector to see if a movie object already exists
    with the same name. 
    If it does then increment that objects watched by 1 and return true.

    Otherwise, return false since then no movies object with the movie name
    provided exists to increment
    *********************************************************************/
bool Movies::increment_watched(std::string name) {
   // you implement this method
   
   for (Movie &movie :movies) {// pass by reference. for every movie object in movies, not const because you need to change the increment value
       if (movie.get_name() == name) {
            movie.increment_watched();
            return true;   
       }
   return false;}



}

/*************************************************************************
    display
    
    display all the movie objects in the movies vector.
    for each movie call the movie.display method so the movie
    object displays itself
    *********************************************************************/
void Movies::display() const {
    if (movies.size()==0)
        std::cout<<"Your collection has zero movies"<<std::endl;
    else
        for (const Movie &movie:movies) //pass by reference, const qualifier because we are not and do not want to modify movie object
//          std::cout<<movie.name()<<movie.rating()<<movie.watched()<<std::endl;    //this will not work because movies.name/rating/watched is private attribute to the class
            movie.display(); //this method is public so no issue here
}