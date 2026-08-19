"""
8) Display Weekday Using match-case Write a Python program that accepts a number from 1 to 7 representing a day of the week. 
Use Python's match-case statement to display the corresponding weekday: 1 → Monday 2 → Tuesday 3 → Wednesday ... 7 → 
Sunday If the user enters a number outside the range 1-7, display "Invalid day number".

"""
num = int(input("Enter the number: "))


match num:

    case 2:
        print("Monday..")

        
    case 3:
        print("Tuesday..")

    case 4:
        print("Wednesday..")

    case 5:
        print("Thursday..")

    case 6:
        print("Friday...")

    case 7:
        print("Saturday..")

    case 1:
        print("Sunday..")

    case _:
        print("Invalid number of week..")







    
    