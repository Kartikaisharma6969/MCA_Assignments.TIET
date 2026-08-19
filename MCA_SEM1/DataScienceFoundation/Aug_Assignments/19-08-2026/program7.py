"""
7) Stop Printing at 3 Using break Write a Python program that prints numbers starting from 1 and continues sequentially. 
The program should use the break statement to stop the loop when the number reaches 3. 

For example, the program should print: 1 2 and terminate the loop before printing 3. 
"""
n = int(input("Enter any number: "))

for i in range(1 , n):
    if i==3:
        reason = i
        break

    print(i)


print("The loop needed to terminate coz we got ",reason)



