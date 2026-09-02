#Q23. Take a list of numbers from user and print them in one line. Demo Input: 1 4 9 16 Demo Output: 1 4 9 16 
num = int(input("Enter the size of the list: "))
list1=[]
for i in range(0, num):
    num = int(input(f"Enter the element no {i+1}: "))
    list1.append(num)

print(list1)
    