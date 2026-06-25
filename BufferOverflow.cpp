// BufferOverflow.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iomanip>
#include <iostream>
#include <string> // for std::string

int main()
{
  std::cout << "Buffer Overflow Example" << std::endl;

  // TODO: The user can type more than 20 characters and overflow the buffer, resulting in account_number being replaced -
  //  even though it is a constant and the compiler buffer overflow checks are on.
  //  You need to modify this method to prevent buffer overflow without changing the account_number
  //  variable, and its position in the declaration. It must always be directly before the variable used for input.
  //  You must notify the user if they entered too much data.

  const std::string account_number = "CharlieBrown42";
  std::string user_input;

  std::cout << "Enter a value: ";
  std::cin >> user_input;

  // Keep asking for input until the user enters 20 characters or fewer.
  while (user_input.length() > 20) {
	std::cout << std::endl;
	std::cout << "Error: Input exceeds the maximum allowed length of 20 characters." << std::endl;
	std::cout << "Please enter a shorter value." << std::endl;
	std::cout << std::endl;
	std::cout << "Enter a value: ";
	std::cin >> user_input; 
  }

  std::cout << std::endl;
  std::cout << "You entered: " << user_input << std::endl;
  std::cout << "Account Number = " << account_number << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
