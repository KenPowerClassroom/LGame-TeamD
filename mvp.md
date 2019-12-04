# Minimal Viable Product (MVP) 

The Minimal Viable Product is a product that has the minimum amount of features necessary to satisfy the user and to garner feedback for future development of the software and/or new software.

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



## Outline MVP functionality

Describe the simplest version of the application that is useful to the user.

## List the features of the MVP
- feature1
- feature2
- ...

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

1. `Example story` Display baord

As a player I need to be able to see the current board configuration so that I can understand my position and figure out my next move.

2. Story-name

As a user `usually player, but can be developer` I need to be able to `do something` so that I can `complete and objective`.


