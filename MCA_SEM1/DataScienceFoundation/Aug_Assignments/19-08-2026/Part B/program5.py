#Q5. Print the last element using negative indexing. 
# Demo Output: berry 

my_list  = []
for i in range(0,5):
    inp = str(input(f"Enter the element for index {i+1}: "))
    my_list.append(inp)

print("Your inputs are taken...")
print("The last element of the list is: ",my_list[-1])