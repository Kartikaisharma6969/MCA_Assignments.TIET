"""17) Point Location Using match-case Write a Python program that accepts the coordinates 
(x, y) of a point and determines its location using Python's match-case with appropriate conditions/guards.
 The program should identify whether the point lies in: 
 • Origin  
 • Positive X-axis  
 • Negative X-axis 
 • Positive Y-axis  
 • Negative Y-axis  
 • First quadrant  
 • Second quadrant  
 • Third quadrant  
 • Fourth quadrant  
 Use match-case appropriately rather than implementing the entire decision using only if-else."""

x = int(input("Enter the value of x point: "))
y = int(input("Enter the value of y point: "))
position = 0

if x>0 and y>0:
    position = 1
    axisofx = "positive x-axis"
    axisofy = "Positive y-axis"

elif x<0 and y>0:
    position  = 2
    axisofx = "Negative x-axis"
    axisofy = "Positive y-axis"

elif x<0 and y<0:
    position = 3
    axisofx = "Negative x-axis"
    axisofy = "Negative y-axis"
elif x>0 and y<0:
    position = 4
    axisofx = "positive x-axis"
    axisofy = "Negative y-axis"
elif x==0 and y==0:
    position  = 5



match position:
    case 1:
        print("The point lies in Quadrant 1")
        print(f"The point {x} lies in {axisofx} and {y} lies in {axisofy}")
    case 2:
        print("The point lies in Quadrant 2")
        print(f"The point {x} lies in {axisofx} and {y} lies in {axisofy}")
    case 3:
        print("The point lies in Quadrant 3")
        print(f"The point {x} lies in {axisofx} and {y} lies in {axisofy}")
    case 4:
        print("The point lies in Quadrant 4")
        print(f"The point {x} lies in {axisofx} and {y} lies in {axisofy}")
    case 5:
        print("The point lies in Origin")






    




