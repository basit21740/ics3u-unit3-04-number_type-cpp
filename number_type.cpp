// Copyright (c) 2021 Abdul Basit All rights reserved.
//
// Created by: Abdul Basit
// Created on: Nov 2021
// this program tells the number type

#include <iostream>

int main() {
  // this function tells the number type
  int type;
  std::cout << "Enter an integer: ";
  std::cin >> type;
  
  if (type > 0) {
    std::cout << type << " is a positive number " << std::endl;
} else if (type < 0) {
    std::cout << type << " is a negative number " << std::endl;
} else {
    std::cout << "0 is just zero!";
    std::cout << "" << std::endl;
}
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
