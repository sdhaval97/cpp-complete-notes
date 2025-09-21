// 👨‍💻 Project 1: Simple User Profile
// Concepts: #include, int main(), variables, std::cout, std::cin, std::string

// --- Pre-processor Directives ---
// This includes the iostream (Input/Output Stream) library.
// It's necessary for using std::cout and std::cin.
#include <iostream>

// This includes the string library, which allows us to use the std::string type
#include <string>

// --- The Main Function ---
// This is the starting point of every C++ program.
// The code inside its curly braces {} is executed when the program runs.
int main() {
    // Declaring 2 variables for user information
    std::string userName;
    int userAge;

    // Taking user input
    std::cout << "Please enter your full name: ";
    std::getline(std::cin, userName);
    std::cout << "Please enter your age: ";
    std::cin >> userAge;

    // printing the output
    std::cout << "\n--- Your Profile ---" << std::endl;
    std::cout << "Hello, " << userName << "!" << std::endl;
    std::cout << "You are " << userAge << " years old." << std::endl;

    // Exiting the program
    return 0;
}