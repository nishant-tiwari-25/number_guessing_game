#  Number Guessing Game (C)

A simple command-line number guessing game written in C. Pick a difficulty level, and the computer chooses a random number for you to guess using higher/lower hints. The game counts your attempts and lets you play as many rounds as you like.

**Made by Nishant Tiwari**

## Features

- Three difficulty levels with different guessing ranges
- Random target number generated each round
- Hints after every guess (your guess is higher / lower)
- Attempt counter shown when you win
- Range check: guesses outside the selected range are rejected and not counted
- Difficulty menu validation: invalid choices show a message
- Play-again prompt with y/n validation (case-insensitive)

## Difficulty Levels

| Level | Choice | Range | Max attempts with best strategy |
|-------|--------|-------|----------------------------------|
| Easy | `1` | 0 – 250 | 8 |
| Medium | `2` | 0 – 500 | 9 |
| Difficult | `3` | 0 – 1000 | 10 |

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

Select the Difficulty level:
  1) Easy (0-250)
  2) Medium (0-500)
  3) Difficult (0-1000)

Enter choice: 1

--- Game Rules ---
Guess a number from 0 to 250.

Enter your guess: 125
Your guess is higher.
Please guess again.

Enter your guess: 60
Your guess is lower.
Please guess again.

Enter your guess: 90
Congratulations!!! You guessed correctly.
You took 3 attempts to guess correctly.

Play again? (y/n): n

Thank you for playing!
```

## Tip: Winning Fast

Guess the middle of the remaining range each time (binary search). This guarantees a win within the attempt limits shown in the difficulty table above.

## How It Works

1. `srand(time(NULL))` seeds the random generator once at startup.
2. Each round, the player picks a difficulty (1, 2 or 3) with `scanf`.
3. `rand() % 251`, `rand() % 501` or `rand() % 1001` picks a target for Easy, Medium or Difficult.
4. An inner `while` loop reads guesses, checks the range, counts the attempt, and prints a hint until the guess matches.
5. After a win, a `do-while` loop asks "Play again?" until the answer is `y`, `Y`, `n` or `N`.
6. The outer `do-while` repeats the whole round while the player answers yes.

## Concepts Practiced

- Loops (`while`, `do-while`) and conditionals (`if / else if / else`)
- Random numbers with `rand()` / `srand()`
- Formatted input and output with `scanf` / `printf`
- Input validation

## Known Limitation

Entering non-numeric text (for example `abc`) at the difficulty or guess prompt makes `scanf` fail repeatedly, so the prompt loops. Enter whole numbers only.

## Ideas for Future Improvements

- [ ] Handle non-numeric input safely (e.g. `fgets` + `sscanf`)
- [ ] Reduce the repeated code for each difficulty with a single `max` variable
- [ ] Limited number of attempts
- [ ] Best score tracking across rounds

## Author

**Nishant Tiwari** — [@nishant-tiwari-25](https://github.com/nishant-tiwari-25)

## License

This project is open source and available under the [MIT License](LICENSE).
