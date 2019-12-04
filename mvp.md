# Minimal Viable Product (MVP) 

The Minimal Viable Product is a product that has the minimum amount of features necessary to satisfy the user and to garner feedback for future development of the software and/or new software.

## Outline MVP functionality

The minimal viable product will be a fully functioning L game with a game manager, board, movable L pieces, movable neutral pieces and a functioning turn order.

The game manager will :

- Validate movements that the player makes
- Undo a move if not valid, then have the player attempt to make another valid move
- Checking there are any moves left for each piece
- Control Turn Order

The 4x4 square board will :

- check whether each square is occupied or not

The L pieces representing each player will be used for :

- Movement for each square of the pieces.
- Checking with GameManager if a move is valid if not it will be undone.

The two neutral Pieces will be used for :

- An optional tactical move for each player to consider at the end of each turn.
- Checking with GameManager if that move is valid , if not it will be undone.

These will make up ythe simplest application for the user, allowing movement of pieces, error checking, checking of a win condition, implementation of a turn order and thus the simplist functioning version of the game.

## List the features of the MVP

- The L gamer should run from start to finish with the following features:
- There must be a 4x4 square board
- There must be two player icons/sprites easily distinguishable in the shape of a 3x2 “L shape”
- There must be two neutral pieces 1x1 in size
- At any given moment there must be 6 unoccupied squares
- A turn order must be implemented between two users
- The user must be able to select a neutral piece and drop it into an unoccupied space on the board
- The users must move their L shape and then have an option of moving a neutral shape before their turn ends.
- The player must be able to move, rotate and flip their L shape with ease.
- There must be a method of checking which squares are occupied as shapes cannot overlap.
- The previous position of the L shape must be stored as the new position has to be different.
- All the losing positions must be stored
- At the start of each players turn it will be checked if any moves can be made by checking the losing positions against the current board layout, if not the previous player wins.

Without these the L game would not perform the way it is expected to by the user.
This will be how the MVP functions. Extra features can be added.

## Out Of Scope

### Move timer
- There will be no limit on how long a player can take to make their move
### No Visual Aids
- There will be no highlighted sqyares suggesting extra movies
### Undo move
- The player's move will be final. They will not be able to undo their move before they choose whether or not to move a neutral piece and the turn changes.
### Text display for number of possible moves
- There will not be a counter indicating how many moves a player can make per turn.
### Customised boards, player pieces, unlockable skins
- There will be no extra visuals apart from the basic sprites maybe red/blue L blocks, white board, and black neutral pieces.
### Drag, rotate, flip and drop pieces (we have a different method to place the squares)
- The player will not be able to pick up their pieces and rotate / flip them using keys. There will be no visual effect of this manner. Instead the player will use the cursor to draw an L shape on the board and it will be calculated if that is an acceptable move. Rotations and flips will in effect take place, it's just the player will not be able to see them occur or do them manually.


## List of stories needed to complete the MVP `aim for 8 stories`

### 1. Draw Board/Grid: 

As a player, the board needs to be the correct size and visible so that they can see what is happening.

### 2. Draw pieces: 

As a player, there needs to be two 1x1 neutral pieces and two 3x2 player pieces. 




### 3. Movement for Player pieces: 

- Both L Pieces must be Movable.
- The current L Piece being moved will depend on the player turn order.
- The Arrow keys will be used to move the L Piece in 4 Directions (Up,Down,Left,Right) within the board parametres.
- For example L Pieces will not move left if colliding with the left parametre of the board. They must be moved back, up or down, flipped, mirrored or set.
- The L Piece will move from tile to tile depending on which arrow key is pressed.
- The player will press the space bar to try to confirm/set their L piece into that place, it will be accepted if valid.

### 4. Movement for Neutral pieces: 

- Both Neutral Pieces must be Movable.
- Only one Neutral Piece may be moved per player turn.
- A Neutral Piece can only be moved at the end of a player's turn.
- The movement of a Neutral Piece is optional so the player will be asked if they wish to move a Neutral Piece. They can accept by pressing Y or decline by pressing N.
- Therefor the Neutral Piece movement depends on the turn order and the valid movement of a Player's L Piece 
- The Arrow keys will be used to move the Neutral Piece in 4 Directions (Up,Down,Left,Right) within the board parametres.
- The Neutral Piece will move from tile to tile depending on which arrow key is pressed.
- The Player will press the space bar to try to confirm/set their Neutral Piece into that place, it will be accepted if the tile is unoccupied.
- A neutral piece can be placed in the same position as it is an optional move.


### 5. Rotation of pieces: 


 
### 6. Flipping of pieces: 







### 7. Check New Position: 

check if the L piece has been moved from its previous position. 



### 8. Turn states: 
As a player, the turns/game phases need to divided into a “moving player piece” phase and “moving neutral piece” phase, so that the gameplay happens in the correct order. 

### 9. Check if Player has any moves available (check for a win/lose condition): 

check if the player can make a move

### 10. Collision Detection:





1. `Example story` Display baord

As a player I need to be able to see the current board configuration so that I can understand my position and figure out my next move.

2. Story-name

As a user `usually player, but can be developer` I need to be able to `do something` so that I can `complete and objective`.


