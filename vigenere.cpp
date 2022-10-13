/*
    Author: Halil Akca
    Course: CSCI-135
    Instructor: Zamansky
    Assignment: Lab 6D
    This program will implement the Vigenere cipher encryption.
*/
#include <iostream>
#include <string>
#include <cctype>
#include "caesar.h"

std::string encryptVigenere(std::string plaintext, std::string keyword)
{
    if(keyword.length() == 0)
    {
        return plaintext;
    }

    std::string s = "";
    int numOfKey = 0;
    int numLetters = 0;

    std::string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int keynums[keyword.length()] = { 0 };

    for(int j=0; j<keyword.length(); j++)
    {
        for(int k=0; k<alpha.length(); k++)
        {
            if(toupper(keyword[j]) == alpha[k])
            {
                keynums[j] = k;
            }
        }
    }
    
    for(int i=0; i<plaintext.length(); i++)
    {
        char newChar = plaintext[i];
        if(isalpha(newChar))
        {
            numOfKey = numLetters % keyword.length();
            numLetters++;
            newChar = shiftChar(plaintext[i], keynums[numOfKey]);
        }

        s += newChar;
    }

    return s;
}