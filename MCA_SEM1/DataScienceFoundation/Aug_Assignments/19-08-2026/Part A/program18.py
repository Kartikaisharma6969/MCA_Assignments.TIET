"""
18) Number Triangle Pattern Write a Python program that accepts the number of rows n and prints a number triangle pattern.
 For example, for n = 5: 
 1 
 12 
 123 
 1234 
 12345 
 The program should:
   • Accept the number of rows from the user.  
   • Use nested loops.  
   • Generate the pattern dynamically based on n. 
"""
rows = int(input("Enter the number of rows: "))


for i in range(1,rows+1):
    for j in range(1,i+1):
        print("*",end = " ")
    print()
    


