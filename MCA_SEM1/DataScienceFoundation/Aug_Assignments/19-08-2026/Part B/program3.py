#Q3. Create a list of 5 subjects and print each on a new line. Demo Output: Math Physics Chemistry English Python 
my_list  = []
for i in range(0,5):
    inp = str(input(f"Enter the element for index {i+1}: "))
    my_list.append(inp)

print("Your inputs are taken...")

print("Printing the list...")
for i in range(0,5):
    print(my_list[i])