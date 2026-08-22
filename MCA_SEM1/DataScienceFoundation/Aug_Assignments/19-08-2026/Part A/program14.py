"""
14) Prime Number Check Write a Python program that accepts an integer and determines whether it is a prime number. 
A prime number is a number greater than 1 that has exactly two factors: 1 and itself. For example: 7 → Prime 12 → Not Prime 
The program should check the divisibility of the number using a loop and display an appropriate message. 
"""

num = int(input("Enter an integer: "))

if num < 2:
    print("Not Prime")
else:
    prime = True

    for i in range(2, num):
        if num % i == 0:
            prime = False
            break

    if prime:
        print("Prime")
    else:
        print("Not Prime")