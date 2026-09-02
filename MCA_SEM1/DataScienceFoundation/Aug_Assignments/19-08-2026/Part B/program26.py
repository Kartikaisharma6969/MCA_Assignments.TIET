#Q26. For the list [1,3,2,4,6,5], find maximum, minimum, and sum. Demo Output: Max: 6 Min: 1 Sum: 21 
list1 =  [1,3,2,4,6,5]
sum = 0
maximum = list1[0]
minimum = list1[0]
for i in range(0,len(list1)):
    sum = sum + list1[i]
    if maximum<list1[i]:
        maximum = list1[i]

    elif minimum>list1[i]:
        minimum = list1[i]

print("Maximum : ",maximum)
print("Minimum : ",minimum)
print("Sum : ",sum)

    

