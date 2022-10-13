/*
  Author: Halil Akca
  Course: CSCI-135
  Instructor: Mike Zamansky
  Assignment: Lab 05
  This program will call the functions made in other .cpp files
*/
#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main()
{
  std::cout << "\nencryptCaesar() function:\nplaintext: Hello, World! Shift: 10\n";
  std::cout << encryptCaesar("Hello, World!", 10);
  std::cout << "\n------------------\n";

  std::cout << "\nencryptVigenere() function:\nplaintext: Hello, World! keyword: cake\n";
  std::cout << encryptVigenere("Hello, World!", "cake");
  std::cout << "\n------------------\n";

  std::cout << "\ndecryptCaesar() function:\nciphertext: Rovvy, Gybvn! Shift: 10\n";
  std::cout << decryptCaesar("Rovvy, Gybvn!", 10);
  std::cout << "\n------------------\n";

  std::cout << "\ndecryptVigenere() function:\nciphertext: Jevpq, Wyvnd! keyword: cake\n";
  std::cout << decryptVigenere("Jevpq, Wyvnd!", "cake");
  std::cout << "\n------------------\n";
  return 0;
}