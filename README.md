# CS50 Caesar
A command-line encryption program written in the C programming language that uses the caesar cipher.\
Developed as apart of the curriculum for [Harvard University's CS50X: Introduction to Computer Science](https://cs50.harvard.edu/x/2025/psets/2/caesar/)

## Features:
- Command-Line Arguments: Accepts an encryption key as a command-line argument when executing the program.
- Input Validation: Ensures the supplied key contains only numerical digits.
- Character Rotation: Shifts alphabetical characters by the specified key using modular arithmetic.
- Case Preservation: Maintains the original uppercase and lowercase formatting of the plaintext.
- Alphabet Wrapping: Automatically wraps characters around the alphabet when reaching the end (e.g. `Z` becomes `B` with a key of `2`).
- Non-Alphabetical Characters: Preserves spaces, punctuation, and numbers without modification.
