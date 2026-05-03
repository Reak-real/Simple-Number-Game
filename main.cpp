#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));

    int secretnumber = rand() % 100 + 1;
    int input = 0;

    while (input != secretnumber) {
        std::cout << "Guess a number between 1 and 100: " << std::flush;
        std::cin >> input;

        if (input < secretnumber) {
            std::cout << "To Low!\n";
        } else if (input > secretnumber) {
            std::cout << "To High!\n";
        } else {
            std::cout << "You Win!\n";
        }
    }

    return 0;
}