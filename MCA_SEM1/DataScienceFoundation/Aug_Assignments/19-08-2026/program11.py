"""
11)  Factorial Using while Loop Write a Python program that accepts a 
non-negative integer n and calculates its factorial using a while loop. The factorial is 
defined as: n! = n × (n-1) × ... × 2 × 1 For example: 5! = 120 The program should also correctly handle the special case: 0! = 1 
"""
num = int(input("Enter the number for its factorial: "))
fact = 1

for i in range(1,num+1):
    
    fact = fact*i

print("The factorial of number is: ",fact)