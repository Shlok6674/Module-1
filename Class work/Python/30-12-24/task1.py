import random
d = {}
r = random.randint(1001,9999)
while True:
    menu = """"
    press 1 for signup
    press 2 for login
    press 3 for forgot password
    press 4 for exit"""

    print(menu)
    choice = int(input("Enter Choice : "))

    if choice==1:
        print("Welcome to signup!!!")
        name = input("Enter your name : ")
        email = input("Enter your email : ")
        mobile = int(input("Enter mobile Number: "))
        password = int(input("Enter your password : "))
        cpassword = int(input("Enter confirm password"))

        if password==password:
            d[name]=name
            d[email]=email
            d[mobile]=mobile
            d[password]=password
            print("Signup Successfull")

        else:
            print("Password not match")

    elif choice==2:

        print("Welcome to login!!!")
        email = input("Enter your email : ")
        password = int(input("Enter your password : "))

        if d['email']==email:
            if d['password']==password:
                print("Login Successfull")
                break

            else:
                print("Password not match")

        else:
            print("Email not found")
    
    elif choice==3:
        print("Welcome to forgot password!!!")
        mobile = int(input("Enter mobile : "))
       
        if d['mobile']==mobile:
            print("your otp is : ",r)
            
            otp = int(input("Enter your otp : "))
            
            if otp==r:
               password = int(input("Enter New Pasword"))

               d['password']=password

               print("Password Updates Succesfully")

            else:
                print("Otp not match")
        else:
            print("Mobile not found")

    elif choice==4:
        print("Thank You")
        break

    else:
        print("Invalid choice")
        break

    
