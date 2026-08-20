"""
10) Multiplication Table Write a Python program that accepts an integer from the user and prints its multiplication 
table from 1 to 10. For example, 
for input 5: 5 × 1 = 5 5 × 2 = 10 ... 5 × 10 = 50 The program must use a loop to generate the table.
"""
num = int(input("Enter the number : "))
print("Table for the entred number is below: ")

for i in range(1,10+1):
    print(num," * ",i,"=",num*i)

