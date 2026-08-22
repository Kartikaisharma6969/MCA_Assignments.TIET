"""
16) Password Attempts Using while-else Develop a Python login program that allows a user a 
maximum of three attempts to enter the correct password. The program should: 
• Store a predefined password.  • Ask the user to enter the password.  
• Allow a maximum of three attempts.  • Display "Login Successful" when the correct password is entered. 
 • Stop further attempts after successful login. 
 • Use the while-else construct to display "Account Locked" when all attempts are exhausted without successful login.
"""
password = int(input("Enter a password: "))
confirmpassword  = int(input("Enter the password again to confirm: "))
attempts = 3
if(password!=confirmpassword):
    print("Didnt match the password..")
    print("try again to enter")

else:
    num = 4
    while attempts>0:
        value =  int(input(f"Enter your password (only {attempts} attempts left): "))
        if value == password:
            print("Login Succesful...")
            break
        else:
            print("Invalid password..")
            attempts  = attempts - 1
    else:
        print("Account Locked..")
        