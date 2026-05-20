#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <vector>
#include <string>

// ============================================
// 1. STRUCT
// ============================================

struct Game {
    std::string PlayerName;
    int maxRange;
    int secret;
    int attempts;
};

// ============================================
// 2. FUNKTION: Setup
// ============================================

Game setupGame() {
    Game g;

    std::cout << "Your Name: ";
    std::cin >> g.PlayerName;

    std::cout << "Max Number Range: ";
    std::cin >> g.maxRange;

    g.secret = rand() % g.maxRange + 1;
    g.attempts = 0;

    return g;
}

// ============================================
// 3. FUNKTION: Play
// ============================================

void playGame(Game& g) {
    int guess = 0;

    while (guess != g.secret) {
        std::cout << "guess (1-" << g.maxRange << "): ";
        std::cin >> guess;

        g.attempts++;

        if (guess > g.secret) {
            std::cout << "Too High!\n";  // \n hinzugefügt
        }
        else if (guess < g.secret) {
            std::cout << "Too Low!\n";   // \n hinzugefügt
        }
    }

    std::cout << "YOU WIN! Attempts needed: " << g.attempts << "\n";
    // << war kaputt: std::cout "..." → std::cout << "..."
}

// ============================================
// 4. FUNKTION: Save
// ============================================

void saveScore(const Game& g) {
    std::ofstream file("scores.txt", std::ios::app);

    file << g.PlayerName << ": " << g.attempts  // PlayerName groß!
         << " (1-" << g.maxRange << ")\n";
}

// ============================================
// 5. MAIN
// ============================================

int main() {
    srand(time(NULL));

    Game myGame = setupGame();
    playGame(myGame);
    saveScore(myGame);

    return 0;
}