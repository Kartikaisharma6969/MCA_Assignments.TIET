"""
12) Count the Digits of a Number Write a Python program that accepts an integer and 
determines the number of digits present in it. For example: Input: 45892 Output:
 Number of digits = 5 The program should use a loop and repeatedly process 
the number until all its digits have been counted. The program should also handle a single-digit number correctly. 
"""
num = int(input("Enter the number: "))
count = 0

while num != 0:
    num = num //10
    count = count  + 1
    


print("Count of numbers in entered integer is: ",count)

