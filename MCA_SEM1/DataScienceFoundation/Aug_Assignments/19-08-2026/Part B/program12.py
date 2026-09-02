#Q12. Take two lists from the user and display the concatenated list. Demo Input: List1: 1 2 3 List2: 7 8 ..Demo Output: [1, 2, 3, 7, 8] 
sizeoflist1 = int(input("Enter the size of list 1: "))
sizeoflist2 = int(input("Enter the size of list 2: "))

list1 = []
list2 = []


print("Enter the elements for the first list: ")


for i in range (0,sizeoflist1):
    value = int(input(f"Enter the value {i+1}: "))
    list1.append(value)
    



print("Enter the elements for the Second list: ")


for i in range (0,sizeoflist2):
    value = int(input(f"Enter the value {i+1}: "))
    list2.append(value)


print("Printing the entred lists...")
print("List 1: ")
for i in range (0,sizeoflist1):
    print(list1[i])

print("List 2: ")
for i in range (0,sizeoflist2):
    print(list2[i])


list3 = list1 + list2

print("Concatinating the list ",list3)

    
    


 

