"""
20) Number Guessing Game Using while-else Develop a number guessing game in Python.
 The program should: 
 • Store a secret number.  
 • Allow the user a maximum of 5 attempts.  
 • Ask the user to guess the number.  
 • Display "Too High" if the guess is greater than the secret number.  
 • Display "Too Low" if the guess is smaller.  
 • Display "Correct!" when the number is guessed.  
 • Use break when the user guesses correctly.  
 • Use the while-else construct to display an appropriate message when all attempts are exhausted.  
"""
secret_Number = 5

attempts = 1

while attempts<=5:

    guess = int(input(f"Guess a number (Attempt no {attempts}): "))
    if guess>secret_Number:
        print("High")
    elif guess<secret_Number:
        print("Low")
    elif guess==secret_Number:
        print("Correct Guess!")
        break
    else:
        print("Wrong input")
    attempts = attempts + 1
else:
    print("All attempts exausted...")
