/*
    Author: Halil Akca
    Course: CSCI-135
    Instructor: Zamansky
    Assignment: Lab 6D
    This program will decrypt messages encrypted by Vigenere and Caesar ciphers.
*/
#include <iostream>
#include <string>
#include <cctype>
#include "caesar.h"

std::string decryptCaesar(std::string ciphertext, int rshift)
{
    int newShift = 0;

    while (newShift < rshift)
    {
        newShift += 26;
    }

    newShift -= rshift;

    std::string s = "";
    for(int i=0; i<ciphertext.length(); i++)
    {
        char newChar = ciphertext[i];
        if(isalpha(newChar))
        {
            newChar = shiftChar(ciphertext[i], newShift);
        }
        s += newChar;
    }

    return s;
}

std::string decryptVigenere(std::string ciphertext, std::string keyword)
{
    if(keyword.length() == 0)
    {
        return ciphertext;
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
                keynums[j] = 26 - k;
            }
        }
    }
    
    for(int i=0; i<ciphertext.length(); i++)
    {
        char newChar = ciphertext[i];
        if(isalpha(newChar))
        {
            numOfKey = numLetters % keyword.length();
            numLetters++;
            newChar = shiftChar(ciphertext[i], keynums[numOfKey]);
        }

        s += newChar;
    }

    return s;
}