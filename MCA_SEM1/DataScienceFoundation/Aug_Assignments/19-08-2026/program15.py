"""
15) Search an Element Using for-else Write a Python program that 
accepts a list of numbers and a target value from the user. The program should 
search for the target value in the list using a for-else construct. If the element is found:
 • Display its position/index. 
   • Terminate the search using break.  If the loop completes without finding the element:
     • Use the else block to display "Element not found".  
Requirement: The search logic must specifically demonstrate Python's for-else construct
"""

list = []
num = int(input("Enter the number of elements you want in list: "))


for i in range(1,num+1):
    value = int(input(f"Enter the element no {i}: "))
    list.append(value)


print("So your entred list: ",list)

element = int(input("Enter a number to search: "))

for i in range(num):
    if element == list[i]:
        print(f"The number is present in the list at {i} index..")
        break

else:
    print(f"Couldnt find the entred number {element} in the list")


