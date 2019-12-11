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

These will make up the simplest application for the user, allowing movement of pieces, error checking, checking of a win condition, implementation of a turn order and thus the simplist functioning version of the game.

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
- There will be no highlighted squares suggesting a valid move
### Undo move
- The player's move will be final. They will not be able to undo their move before they choose whether or not to move a neutral piece and the turn changes.
### Text display for number of possible moves
- There will not be a counter indicating how many valid moves a player has remaining.
### Customised boards, player pieces, unlockable skins
- There will be no extra visuals apart from the basic sprites maybe red/blue L blocks, white board, and black neutral pieces.

## Storyboards

### 1. Draw Board/Grid: 

- Use SFML
- Draw a 4 x 4 grid of sf::Rectangles 100px X 100px each; which will effectively function as square tiles .
- Each tile will have a black outline around a white centre for easy identification of each tile.
- The board and text will be displayed on a 900px X 800px window 
- 900px X 100px Rectangle shape will be at the top of the screen for text displaying which player's turn it currently is, effectively acting like UI. 

### 2. Draw pieces: 

- Two 1 tile x 1 tile neutral pieces will be drawn
- Two 3 tile x 2 tile player pieces will be drawn to form an L shaped piece.
- Using SFML, the neutral pieces will be 2 yellow sf::Circles with a radius of 50px
- Using SFML, the player pieces will be sf::Rectangles, one red and one blue which would be 300px x 200px in the shape of an L.

### 3. Movement for Player pieces: 

- Both L Pieces must be Movable.
- The current L Piece being moved will depend on the player turn order.
- The Arrow keys will be used to move the L Piece in 4 Directions (Up,Down,Left,Right) within the board parametres.
- For example L Pieces will not move left if colliding with the left parametre of the board. They must be moved back, up or down, flipped, mirrored or set.
- The L Piece will move from tile to tile depending on which arrow key is pressed.
- The player will press the space bar to try to confirm/set their L piece into that place, it will be accepted if valid.
- L piece Movement does not depend on L piece Rotation as both can be coded and tested independently.

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

- Only L pieces need to be able to be rotated.
- L pieces will be rotatable clockwise using the "A" key and anti Clockwise using the "D" key.
- L pieces will be rotated 90 degrees each time "D" is pressed as the L shape can not be placed diaginally, Lesser rotations would be unnecessary.
- L pieces will be rotated -90 degrees each time "A" is pressed as the L shape can not be placed diaginally, Greater rotations would be unnecessary.
- The player will use the space key to set the piece.
- L piece Rotation does not depend on L piece movement as both can be coded and tested independently.
 
### 6. Flipping of pieces: 

- Only L pieces need to be able to be flipped (mirrored).
- L pieces can be mirrored by pressing the "W" key.
- When flipped/ Mirrored only the outlying tile of the L shaped will be moved as the other 3 tiles form a straight line, their position will not change.
- The outlying tile will be flipped two tiles in a direction dependent on the current L piece's rotation.
- If the L piece's current Rotation is 0 (It is upright) and it has not been mirrored/flipped yet, then the outlying tile will be moved two tiles Left when the L piece is flipped or mirrored.
- If the L piece's current Rotation is 180 (It is upside-down) and it has not been mirrored/flipped yet, then the outlying tile will be moved two tiles Right when the L piece is flipped or mirrored.
- If the L piece's current Rotation is 90 (Sideways facing down) and it has not been mirrored/flipped yet, then the outlying tile will be moved two tiles Up when the L piece is flipped or mirrored.
- If the L piece's current Rotation is 90 (Sideways facing Up) and it has not been mirrored/flipped yet, then the outlying tile will be moved two tiles down when the L piece is flipped or mirrored.
- If the L Piece has already been flipped then the outer tile will be flipped two tiles in the opposite direction to that outlined above.
- The L Pieces current mirrored state will be stored in a bool for simplicities sake so we can moniter whether or not it has already been mirrored, That way we can move the outer tile in the correct direction when "W" is pressed.
- L Piece flipping therefor depends on L piece rotation to be working in order to mirror the shape correctly.

### 7. Check New Position: 

- creating a vector to hold the players current position 
- creating a vector to hold the players previous position 
- comparing the players current position with the previous position, at least one tile has to have changed position to be recognised as a valid move
- display text if both postions are the same so the player has to make a new valid move
- when turn is over it will move store the new location to the previous position

### 8. Turn states: 

- using  an enum to change between each player's L piece movement and each player's chance to move a neutral piece.
- display message in text box saying who's turn it is and which piece is currently being moved
- can not move player piece when a neutral piece is to be moved 
- can not move neutral piece while players piece is to be moved
- Use "tab" key for selection of nutreal piece, when it is neutrals turn only
- press the "enter" key for approval on the selction of that piece
- once a neutrals is selected you can not select the other one until your next turn.
- press "space" key when you have selected a tile to confirm the piece's place.

### 9. Check if Player has any moves available (check for a win/lose condition): 

- Verify if there are any valid moves that the player can make by checking the position of the other L piece and both neutral pieces and making sure that there is enough free board space in the right shape to place the L piece in another position on the board.
- If there are valid moves that the player can make, then allow the game to continue and the player to take their movement turn.
- If there are no valid moves possible, then the player has lost the game and stop their turn and the gameplay there, the previous player that made the final move is the winner.
- Display a game over screen and give the user the option to play again.

### 10. Collision Detection:

- make sure the player is within the boundaries of the board
- looking through the grid square by square to see if the player is in the grid boundaires
- dont allow movement if collision found
- looking through the grid square by square to see if the neutral pieces are in the same square
- not allowing movement of the neutral piece if boolen is true
