/*
  Author: Halil Akca
  Course: CSCI-135
  Instructor: Mike Zamansky
  Assignment: Lab 05
  This program will call the functions made in other .cpp files
*/
#include <iostream>


#include "caesar.h"

int main()
{
  std::cout << "\nencryptCaesar() function:\nplaintext: Hello, World! Shift: 10\n";
  std::cout << encryptCaesar("Hello, World!", 10);
  std::cout << "\n------------------\n";
  return 0;
}