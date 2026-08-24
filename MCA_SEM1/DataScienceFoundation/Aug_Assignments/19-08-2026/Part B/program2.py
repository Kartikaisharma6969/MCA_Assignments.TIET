#Q2. Create an empty list and take 4 integers from user, 
# then print the list. Demo Input: 10 20 30 40 Demo Output: [10, 20, 30, 40] 

my_list  = []
for i in range(0,4):
    inp = int(input(f"Enter the element for index {i+1}: "))
    my_list.append(inp)

print("Your inputs are taken...")

print("Printing the list...")
for i in range(0,4):
    print(my_list[i])
