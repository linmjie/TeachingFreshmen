# Monster Fight First Edition

You're creating a simulation for Monster brawls. There are monsters on your side an monsters on the opposing side. For now, you will only have one monster on each side. These monsters take turn attacking each other.

## Requirements
 - Create a class for Monsters with fields including:
    - A name
    - Health points
    - Damage
    - Defense
 - The class should have at least the following methods:
    - A damage method that harms the current Monster given that attributes of another Monster - it's recommended to have this return the amount of damage done to show said info on each turn
    - An isDead method that checks if the Monster is dead or alive
 - All fields MUST be `private` (member functions `public`)
 - The user should be able to input the fields for an allied Monster
 - The user will be able to input the fields for the opposing Monster
 - Ask the user for how many turns to play
    - Each turn will have your allied Monster attack the other, the damage the opposing Monster takes is the attacking Monster's attack minus the recipient Monster's defense (damage cannot go below 0 though)
 - You should display some info on each turn describing what happens
 - Play these turns and tell the user which Monster won at the end - if neither Monster died, the Monster with the highest health wins
 - It's your choice as to whether your Monster or the opposing Monster goes first. You can optionally look up how to generate random numbers and make the first turn random.