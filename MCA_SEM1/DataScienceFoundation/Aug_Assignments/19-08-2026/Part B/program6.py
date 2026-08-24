## Q6. Take a list from user and print first and last element. 
# Demo Input: 5 9 1 7 3 Demo Output: First: 5 Last: 3 
my_list = []
for i in range(0,5):
    inp = int(input(f"Enter the element for index {i+1}: "))
    my_list.append(inp)

print("The First element is: ",my_list[0])
print("The last element is: ",my_list[-1])