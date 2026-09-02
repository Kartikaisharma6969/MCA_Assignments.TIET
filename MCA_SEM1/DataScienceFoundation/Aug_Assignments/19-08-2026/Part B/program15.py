#Q15. Take a list and a value from the user and check whether 
# the value exists in the list. 
# Demo Input: List: 4 8 2 9 Value: 2
list1 = []

size = int(input("Enter the size of the list: "))
for i in range (0,size):
    inp = int(input(f"Enter the element no {i+1}:"))
    list1.append(inp)


print(list1)

value = int(input("Enter the value to search: "))
if value in list1:
    print(f"Yes its present ")
else:
    print("Absent in list")