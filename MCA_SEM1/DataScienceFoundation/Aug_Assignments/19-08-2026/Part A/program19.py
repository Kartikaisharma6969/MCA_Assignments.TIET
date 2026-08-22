"""
19) Skip Multiples of 3 Using continue Write a Python program that accepts a positive integer n and prints numbers from 1 to n.
 However, all numbers divisible by 3 must be skipped. 
 For example, for n = 15, 
 the program should print: 1 2 4 5 7 8 10 11 13 14 15 Requirements: 
• Use a loop.  
• Identify multiples of 3 using the modulus operator.  
• Use the continue statement to skip them.  
"""
n = int(input("Enter the final number n: "))

for i in range(1,n):
    if(i%3==0):
        continue
    print(i)