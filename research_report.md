# The L-Game Research report 
## Introduction 

### Who are we 
- Mason-Lee (https://github.com/MasonLee219) 
- Niamh-Andrews (https://github.com/NiamhAndrews) 
- Patrick-Donnelly (https://github.com/PatrickDonnelly) 
- Emma-Conlon (https://github.com/Emma-Conlon) 
- Mark-Sheils (https://github.com/MarkSheils) 

### What is the purpose of this document 
- The purpose of this document is to outline the important details of real world game we are recreating, our intended features and vision for where we want to take our game and everything needed in the game for it to be a functional product.

### Why are we doing this project this project
- Recreating “The L Game” in C++ in a team of 4-5, is a part of the Software Engineering Module in the Computer Games Development Bachelors degree in Carlow IT.

### What we hope to learn from this project 
- Collaboration and GitHub merging 
- Dealing with GitHub merge errors 
- Implementation of clean, concise and well structured code that doesn’t only work well but also is easier to read and work with

## Game Description 

The “L game” is played between 2 people on a 4x4 grid board. Each player has a 3x2 L-shaped piece that they must place, and there are also two 1x1 neutral pieces that can be moved by either player that are usually represented as coins or discs.

The L game is an abstract strategy board game which is relatively modern for how simplistic the playing pieces and rules are. It was created by Edward de Bono in 1967 and introduced in his book “The Five-Day Course in Thinking.” His intention was to create the simplest and smallest possible game that could be played with a high degree of skill.

## Game Rules

### Setting up the board: 
- Place the two neutral spaces on the bottom right-hand corner and the top left-hand corner. 
- One piece should be placed in an L shape right beside the neutral space on the bottom left. 
- The other player L piece should be “upside down and flipped” and beside the top left neutral space. 
- The pieces should form a rectangle in the middle of the board. 

### Movements for Players 
- piece must stay inside the board, DON’T GO OFF BOARD for a new position. 
- Don’t place L pieces on top of each other. 
- Each person has to wait their turn until other player is done. 
- When moving an L piece place it on a at least one new square to make a valid move. 
- it must end in a different position from the position it started (thus covering at least one square it did not previously cover). 
- You can rotate or flip your L piece as long as it fits. 
- After your turn you can move one neutral piece and place it anywhere to block opponent.

## Playing Strategies

It is possible for both players to play a perfect game, as there are at least 2296 possible arrangements, with mirror arrangements unaccounted for.

Each move is categorised into 3 categories in terms of board control: Weak, Neutral, and Strong.
The first move made in the game is always Neutral at best, meaning that the player going second can easily punish them if they make a weak move, giving the player going second a distinct advantage. 

Finished games always have the follow pattern:
- Losing pieces are always in a corner, with occupying at least three side squares.
- Winning pieces always control three central squares

With this information, a few strategies can be used to ensure the most optimal positioning of the pieces in order to make a kill move.

### Strategy 1: Corner zoning

This strategy involves making a strong move with your L piece to zone the opponent off into a 3x3 square in any corner of the board, forcing them to move into side squares, and using the neutral pieces to prevent the opponent’s piece from switching to a mirror position.


### Strategy 2: Half-Boarding

This strategy involves you making a strong move with your piece to zone the opponent by blocking half the board, occupying three central squares and then moving a neutral piece to prevent the opponent from moving to their alternate positions
