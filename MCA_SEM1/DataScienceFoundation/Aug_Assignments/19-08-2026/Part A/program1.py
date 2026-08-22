"""
1)  Voting Eligibility Write a Python program to determine whether a person is eligible to vote based on their age.
 The program should: • Accept the person's age as input.  • Consider a person eligible to vote if their age is 18 years or above.  •
   Display 
an appropriate message such as "Eligible to Vote" or "Not Eligible to Vote".  • Use a conditional statement to implement the decision.  
"""
age = int(input("Enter your age: "))

if age>=18:
    print("Your are elegible...")
else:
    print("You are not elegible..")
