"""
13) Reverse a Number Write a Python program that accepts an integer 
and generates its reverse without converting the number into a string. For example: Input: 12345 Output: 54321 
The program should use arithmetic operations such as % and // along with a loop to extract and construct the reversed number. 
"""
num = int(input("Enter the number: "))

reverse = 0

while num != 0:
    digit = num % 10
    reverse = reverse * 10 + digit
    num = num // 10

print("Reverse of the number is:", reverse)