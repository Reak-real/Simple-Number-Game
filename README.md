# 🎯 Number Guesser

A simple command-line number guessing game written in C++. The program picks a random number and you try to guess it — with hints whether you're too high or too low.

---

## How It Works

1. Enter your name
2. Choose a number range (e.g. `100` → the secret number will be between 1 and 100)
3. Guess until you get it right
4. Your score (number of attempts) gets saved to `scores.txt`

---

## Build & Run

```bash
g++ -o number_guesser main.cpp
./number_guesser
```

---

## Example

```
Your Name: Max
Max Number Range: 100
guess (1-100): 50
Too High!
guess (1-100): 25
Too Low!
guess (1-100): 37
YOU WIN! Attempts needed: 3
```

---

## Scores

Results are saved to `scores.txt` in the same directory:

```
Max: 3 (1-100)
Anna: 7 (1-50)
```

---

## Known Bugs

- **Invalid input crashes the program** — if you type something that's not a number (e.g. `abc` or `1s`), `std::cin` enters a fail state and the game gets stuck in an infinite loop.

  **Workaround:** Only enter whole numbers.

  **Planned fix:** Add input validation with `cin.fail()` checking.

---

## Project Structure

```
.
├── main.cpp       # All game logic
└── scores.txt     # Created automatically after first win
```
