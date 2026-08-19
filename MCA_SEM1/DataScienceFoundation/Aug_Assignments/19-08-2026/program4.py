"""
4) Print Numbers from 1 to n Using while Loop Write a Python program that accepts 
a positive integer n and prints all numbers from 1 to n using a while loop.
For example, for n = 5, the output should contain the numbers from 1 through 5. 
Requirement: The program must use a while loop and should correctly update the 
loop-control variable to avoid an infinite loop.
"""
n = int(input("Enter the number: "))

i = 1
print("Counting from 1 to ",n, " is below")

while i<n+1:
    print(i)
    i = i + 1