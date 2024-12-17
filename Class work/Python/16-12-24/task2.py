from task1 import *

while True:


    menu = """
    press 1 for Right Angle Pattern
    press 2 for Left Angle Pattern
    press 3 for Triangle
    press 4 for prime number
    press 5 for exit
    """
    print(menu)

    choice = int(input("Enter your choice: "))
    if choice == 1:
        myfun()

    elif choice == 2:
        myfun2()

    elif choice == 3:
        n = int(input("Enter the number of Rows: "))
        myfun3(n)

    elif choice == 4:
        n1 = int(input("Enter the number : "))
        myfun4(n1)

    elif choice == 5:
        print("Exiting the program")
        break

    else:
        print("Invalid choice, please try again")
        break
