"""
9) Grade Calculator Using if-elif Develop a Python program that accepts a student's marks and
 assigns a grade according to the following criteria:
   Marks 90-100 Grade 80-89 A B 70-79 60-69 C D 50-59 E Below 50 F The program should: • Accept marks from the user.  
• Validate that marks are within the range 0-100. 
 • Use an if-elif-else structure.  • Display the corresponding grade.  
"""
marks = int(input("Enter the marks: "))


if marks>=90 and marks<=100:
    print("A")

elif marks>=80 and marks<=89:
    print("B")
elif marks>=70 and marks<=79:
    print("C")

elif marks>=60 and marks<=69:
    print("D")

elif marks>=50 and marks<=59:
    print("E")
elif marks>0 and marks<50:
    print("Fail")

else:
    print("Invalid input entred for marks..")