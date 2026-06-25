// Exceptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <exception>
#include <stdexcept>

class CustomException : public std::exception {
public:
    const char* what() const noexcept override
    {
        return "Custom Exception Occurred!";
    }
};

bool do_even_more_custom_application_logic()
{
	std::cout << "Running Even More Custom Application Logic." << std::endl;

    // TODO: Throw any standard exception
	throw std::runtime_error("An error occurred in do_even_more_custom_application_logic!");

    return true;
}
void do_custom_application_logic()
{
    // TODO: Wrap the call to do_even_more_custom_application_logic()
    //  with an exception handler that catches std::exception, displays
    //  a message and the exception.what(), then continues processing
    try {
        std::cout << "Running Custom Application Logic." << std::endl;

        if (do_even_more_custom_application_logic())
        {
            std::cout << "Even More Custom Application Logic Succeeded." << std::endl;
        }

    }
	catch (const std::exception& ex) {
        std::cout << "Caught an exception in do_custom_application_logic: " << ex.what() << std::endl;
	}

    std::cout << "Leaving Custom Application Logic." << std::endl;
    // TODO: Throw a custom exception derived from std::exception
    //  and catch it explictly in main
	throw CustomException();

}

float divide(float num, float den)
{
    // TODO: Throw an exception to deal with divide by zero errors using
    //  a standard C++ defined exception
    if (den == 0) {
        throw std::invalid_argument("Denominator cannot be zero.");
	}

    return (num / den);
}

void do_division() noexcept
{
    //  TODO: create an exception handler to capture ONLY the exception thrown
    //  by divide.
    try {
        float numerator = 10.0f;
        float denominator = 0;

        auto result = divide(numerator, denominator);
        std::cout << "divide(" << numerator << ", " << denominator << ") = " << result << std::endl;
    }

    catch (const std::invalid_argument& ex) {
        std::cout << "Caught an exception in do_division: " << ex.what() << std::endl;
    }
}

int main()
{
    std::cout << "Exceptions Tests!" << std::endl;

    // TODO: Create exception handlers that catch (in this order):
    //  your custom exception
    //  std::exception
    //  uncaught exception 
    //  that wraps the whole main function, and displays a message to the console.
    try {
        do_division();
        do_custom_application_logic();
    }

    catch (const CustomException& ex) {
        std::cout << "Caught a CustomException in main: " << ex.what() << std::endl;
    }
    catch (const std::exception& ex) {
        std::cout << "Caught a std::exception in main: " << ex.what() << std::endl;
    }
    catch (...) {
        std::cout << "Caught an uncaught exception in main." << std::endl;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu