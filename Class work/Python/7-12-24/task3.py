while True:
    menu= """
        Press 1 For Addition
        Press 2 For Odd and Even
        Press 3 For Factorial
        Press 4 For Exit

"""

    print("menu")

    choice=int(input("Enter the Number:"))

    if choice==1:
        num1=int(input("Enter the First Number:"))
        num2=int(input("Enter the Second Number:"))
        print("Addition of the number is :",num1+num2)

    elif choice==2:
        num=int(input("Enter the Number:"))
        if num%2==0:
            print("The Number is Even")
        else:
            print("The Number is Odd")

    elif choice==3:
        num=int(input("Enter the Number:"))
        fact=1
        while(num>=1):
            fact=fact*num
            num=num-1

        print("Factorial of Number is:",fact)    
    elif choice==4:
        print("Thank You")
        break
    else:
        print("Invalid Number")
        break
        