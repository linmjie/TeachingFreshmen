# Cards Odds Calculator
- The number of permutations in a deck of 52 cards is 52!
- You're helping the creator of Balatro - a card-based video game - calculate the different permutations of decks, but the number of cards can vary as the user plays the game
- It is a very common action to remove a card from the deck or add a card to the deck, and you'd want to calculate the permutations of those new decks as well
- Find the the permutations of a given deck, as well as the permutations in the deck of n - 1 and n + 1 where n is the number of cards in the deck

## Requirements
- Ask the user for a numeric input
- The numeric input has to be between 2 and 19
    - 20! is greater than the max size of an int (32-bit number); use a long long (64-bit number) instead
    - Do not calculate a factorial if it is out of bounds
- Output the factorial of the number if it is within the bounds
- Calculate the factorial of n - 1 and n + 1 where n was the number inputted
- Output these two numbers too