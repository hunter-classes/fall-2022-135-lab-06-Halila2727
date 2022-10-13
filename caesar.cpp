/*
    Author: Halil Akca
    Course: CSCI-135
    Instructor: Zamansky
    Assignment: Lab 6B
    This program will implement the Caesar cipher encryption.
*/
#include <iostream>
#include <string>
#include <cctype>

// A helper function to shift one character by rshift
char shiftChar(char c, int rshift)
{
    int place = int(c);
    
    for(int i=0; i < rshift; i++)
    {
        place += 1;

        if(c >= 'A' && c <= 'Z' && place > 90)
        {
            place = 65;
        }

        if(c >= 'a' && c <= 'z' && place > 122)
        {
            place = 97;
        }
    }
    return char(place);
}

// Caesar cipher encryption
std::string encryptCaesar(std::string plaintext, int rshift)
{
    std::string s = "";
    for(int i=0; i<plaintext.length(); i++)
    {
        char newChar = plaintext[i];
        if(isalpha(newChar))
        {
            newChar = shiftChar(plaintext[i], rshift);
        }
        s += newChar;
    }

    return s;
}
