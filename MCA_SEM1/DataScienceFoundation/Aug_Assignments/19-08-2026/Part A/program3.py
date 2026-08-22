"""
3)  Print Numbers from 1 to n Using for Loop Write a Python program that accepts a positive integer n
 and prints all numbers from 1 to n using a for loop. For example, if the user enters 5, the program should display: 1 2 3 4 5 
"""
n = int(input("Enter the number : "))
print("The counting from 1 to ",n," is below")

for i in range (1,n+1):
    print(i)