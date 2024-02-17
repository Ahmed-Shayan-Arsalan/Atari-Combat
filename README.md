Rush Hour Game
This is a simple Rush Hour game implemented in C++ using OpenGL. The game allows one or two players to control tanks and navigate through obstacles, shooting bullets to score points. The game includes features such as random level generation, obstacle detection, and intelligent bot movements.

Table of Contents
Features
Controls
Game Levels
Scoring Points
Game Modes
Bonus Features
Starter Code
How to Run
Important Note
Contributors
License
Features
Game Start Menu with options for high scores, settings, credits, and game modes.
Randomly generated levels with obstacles and vehicle spawn points.
Player and bot movements in all four directions.
Three types of cannons with different sizes, damage, and availability.
Intelligent bot movements with the ability to find the shortest path to the player.
Power-ups in 1 Player mode to increase player speed temporarily.
Saving player progress and high scores in separate text files.
Sound effects for shooting and other actions.
Bonus features such as animations when a player is hit and canon reflections off walls.
Controls
Player 1 (Tank):
Move Up: Up Arrow Key
Move Down: Down Arrow Key
Move Left: Left Arrow Key
Move Right: Right Arrow Key
Shoot: 'c' key
Player 2 (Tank):
Move Up: 'w' key
Move Down: 's' key
Move Left: 'a' key
Move Right: 'd' key
Shoot: 'm' key
Game Levels
Level 1: One bot, basic obstacles.
Level 2: Two bots, increased speed and intelligence.
Level 3: Three bots, additional challenges.
Scoring Points
Each time a player hits another player, one point is scored.
Frontal hits score additional points.
Game Modes
1 Player Mode:

The player competes against computer-controlled bots.
The level clears when the player scores 10 points.
If bots hit the player 10 times, the computer wins, and the game ends.
Power-ups increase the player's speed temporarily.
2 Player Mode:

Two players compete against each other.
The player who hits the opponent 10 times wins.
Bonus Features
Sound effects for a more immersive experience.
Animations when a player is hit.
Save player progress and high scores.
Intelligent bot movements and dynamic cannon reflections off walls.
Starter Code
The provided starter code in C++ uses OpenGL to draw basic shapes for level generation and game objects. You are required to modify and add functionality according to the project statement.
