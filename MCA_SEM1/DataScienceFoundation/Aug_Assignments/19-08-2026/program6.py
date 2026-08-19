"""
6) Skip Character 'h' Using continue Write a Python program that accepts a string from the user and 
prints its characters one by one. The program should use the continue statement to skip the character 'h'. For example,
 if the input is: python the program should print all characters except 'h'. 
Requirement: The skipping of 'h' must specifically be implemented using continue.
"""
n = str(input("Enter a string: "))
length = len(n)

for i in range(0, length):
    if n[i] == 'h':
        continue
    print(n[i])