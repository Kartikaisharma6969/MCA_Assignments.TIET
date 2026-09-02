#Q24. Count how many elements are greater than 10 in a list. Demo Input: 5 12 3 25 10 19 Demo Output: Count: 3 


list1 = [5, 12, 3 ,25, 10 ,19]
count = 0
for i in range (0,len(list1)):
    if(list1[i]>10):
        count = count + 1

print("The count of elements which are greater than 10 is: ",count)
