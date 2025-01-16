# XO Game

## Overview

XO Game is a simple implementation of the classic Tic-Tac-Toe game, developed in C++. The game allows two players to play against each other on a 3x3 grid. Players take turns marking X or O in empty cells, and the first player to align three of their symbols in a row, column, or diagonal wins. If all cells are filled without a winner, the game ends in a draw.

## Features

- Two-player mode.
- Input validation to prevent overwriting cells or invalid moves.
- Clear and interactive command-line interface.
- Displays the game board after each move.
- Detects win or draw conditions and announces the result.

## Installation

1. Clone the repository from GitHub:
   ```bash
   git clone https://github.com/your-username/xo-game.git
   ```
2. Navigate to the project directory:
   ```bash
   cd xo-game
   ```
3. Compile the source code using a C++ compiler. For example, with `g++`:
   ```bash
   g++ -o xo_game xo_game.cpp
   ```

## Usage

1. Run the compiled executable:
   ```bash
   ./xo_game
   ```
2. Follow the on-screen instructions to play the game.

## How to Play

1. Players take turns to input a number between 1 and 9 corresponding to the position on the grid where they want to place their mark.
2. The game board updates after each valid move.
3. The game ends when:
   - A player aligns three of their marks (X or O) in a row, column, or diagonal.
   - All cells are filled without a winner (draw).

## Example Gameplay

```
Player X, enter your move: 1
❌ |   |  
---|---|---
   |   |  
---|---|---
   |   |  

Player O, enter your move: 2
❌ | 🟢 |  
---|---|---
   |   |  
---|---|---
   |   |   
```

## Contributing

If you'd like to contribute to the project, feel free to fork the repository and submit a pull request. Suggestions and bug reports are also welcome.

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.

## Acknowledgements

- Thanks to the C++ community for providing helpful resources and inspiration for this project.

## Contact

For questions or feedback, you can reach me at [rabiasaad616@gmail.com].

---

Developed by Saad RABIA.

