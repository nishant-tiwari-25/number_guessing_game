#  Number Guessing Game (C)

A simple command-line number guessing game written in C. The computer picks a random number between **0 and 500**, and you try to guess it using higher/lower hints. The game counts your attempts and lets you play as many rounds as you like.

**Made by Nishant Tiwari**

## Features

- Random target number generated each round
- Hints after every guess (your guess is higher / lower)
- Attempt counter shown when you win
- Range check: guesses outside 0–500 are rejected and not counted
- Play-again prompt with y/n validation (case-insensitive)

## Getting Started

### Prerequisites

- A C compiler such as `gcc` or `clang`

### Build and run

```bash
git clone https://github.com/nishant-tiwari-25/number-guessing-game.git
cd number-guessing-game
gcc -o game main.c
./game
```

## Example

```
--- Number Guessing Game ---

--- Game Rules ---
Guess a number from 0 to 500.

Enter your guess: 250
Your guess is higher.
Please guess again.

Enter your guess: 125
Your guess is lower.
Please guess again.

Enter your guess: 187
Congratulations!!! You guessed correctly.
You took 3 attempts to guess correctly.

Play again? (y/n): n

Thank you for playing!
```

## Tip: Winning Fast

Guess the middle of the remaining range each time (binary search). With 501 possible numbers, you can always win in **9 attempts or fewer**.

## How It Works

1. `srand(time(NULL))` seeds the random generator once at startup.
2. Each round, `rand() % 501` picks a target between 0 and 500.
3. An inner `while` loop reads guesses with `scanf`, checks the range, counts the attempt, and prints a hint until the guess matches.
4. After a win, a `do-while` loop asks "Play again?" until the answer is `y`, `Y`, `n` or `N`.
5. The outer `do-while` repeats the whole round while the player answers yes.

## Concepts Practiced

- Loops (`while`, `do-while`) and conditionals
- Random numbers with `rand()` / `srand()`
- Formatted input and output with `scanf` / `printf`
- Input validation

## Known Limitation

Entering non-numeric text (for example `abc`) when asked for a guess makes `scanf` fail repeatedly, so the prompt loops. Enter whole numbers only.

## Ideas for Future Improvements

- [ ] Handle non-numeric input safely (e.g. `fgets` + `sscanf`)
- [ ] Difficulty levels (different ranges)
- [ ] Limited number of attempts
- [ ] Best score tracking across rounds

## Author

**Nishant Tiwari** — [@nishant-tiwari-25](https://github.com/nishant-tiwari-25)

## License

This project is open source and available under the [MIT License](LICENSE).
