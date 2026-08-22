"""
5) Sum of First n Natural Numbers Write a Python program 
that accepts a positive integer n and calculates the sum of the first n natural numbers using a loop. 
For example, if n = 5: 1 + 2 + 3 + 4 + 5 = 15 
The program should: • Accept n as input.  
• Use a loop to calculate the sum.  • Display the calculated sum.  
"""
n = int(input("Enter the number: "))
sum = 0

for i in range(1,n+1):
    sum = sum + i


print("The sum of natural numbers from 1 to ",n," is: ",sum)
