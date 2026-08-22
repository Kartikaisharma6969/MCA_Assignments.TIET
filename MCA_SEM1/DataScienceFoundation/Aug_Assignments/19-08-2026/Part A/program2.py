"""
2) Odd or Even Write a Python program that accepts an integer and determines whether it is odd or even. The program should: 
• Accept an integer from the user.  • Use the modulus (%) operator to determine divisibility by 2.  
• Display an appropriate message indicating whether the number is odd or even.  
"""
num = int(input("Enter the number: "))
if num%2==0:
    print("The number is even..")
elif num%2!=0:
    print("The number is odd")

else:
    print("Invalid input...")
    