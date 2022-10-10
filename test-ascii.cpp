/*
    Author: Halil Akca
    Course: CSCI-135
    Instructor: Zamansky
    Assignment: Lab 6A
    This program will report all characters from the input with their ASCIII codes.
*/
#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string s = "";

    std::cout << "Input: ";
    getline(std::cin,s);
    std::cout << "\n\n";

    for(int i=0; i<s.length(); i++)
    {
        std::cout << s[i] << " " << int(s[i]) << "\n";
    }

    return 0;
}