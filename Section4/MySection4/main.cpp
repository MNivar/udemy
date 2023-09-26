#include <iostream>
using namespace std;

int main() {
   //This program will calculate the area of the room in square feet
    int room_length {0};
    int room_width {0};

    cout<<"Enter the length and width of your room, seperated by a space";
    cin>> room_length >> room_width;
    cout<<"The area of your room is " << room_length* room_width << endl;

    return 0;
}
