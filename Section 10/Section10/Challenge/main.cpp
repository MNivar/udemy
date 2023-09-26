// Section 10
// Challenge - 
// Substitution Cipher

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decryped the encrypted message back to the original message.

You may use the 2 strings below for  your subsitition.
For example, to encrypt you can replace the character at position n in alphabet 
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    cout<<"Enter a message you wish to encrypt"<<endl;
    string message;
    string encrypted_message;
    
    getline(cin,message);
    
    cout<<"Encrypting message..."<<endl;
    
    //--> hello
    for (char letter: message) {
        if (isalpha(letter)) {  //could have used---> if position!=string::npos, not equal to no position
            size_t position=alphabet.find(letter);
            encrypted_message+= key.at(position);
        } 
        else {
        encrypted_message+= letter;
    }}
    
    cout <<"Here is your encrpyed message: "<< encrypted_message<<endl;
    
    string original_message;
    
    for (char letter: encrypted_message){
        size_t position=key.find(letter);
        if (position!=string::npos){
            original_message+=alphabet.at(position);
        }
    
     else {
         original_message+=letter;
}}

cout<<"Here is your orginal message: " <<original_message<<endl;
    
    
    return 0;
}

