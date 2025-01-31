from task1 import *

mydb = pymysql.connect(host='localhost', user='root', password='', database='mydatabase')
mycursor = mydb.cursor()

# Create a new table for users
mycursor.execute("CREATE TABLE IF NOT EXISTS users(id int primary key auto_increment, name varchar(80), email varchar(80), password varchar(80))")
mydb.commit()

def confirm_password(password):
    confirm = input("Confirm password: ")
    return password == confirm

while True:
    menu = """
    press 1 to sign up
    press 2 to exit
    """
    print(menu)

    choice = input("Enter your choice: ")

    if choice == '1':
        name = input("Enter name: ")
        email = input("Enter email: ")
        password = input("Enter password: ")

        if confirm_password(password):
            query = "INSERT INTO users(name, email, password) VALUES('%s', '%s', '%s')"
            args = (name, email, password)
            mycursor.execute(query % args)
            mydb.commit()
            print("User signed up successfully")
        else:
            print("Passwords do not match. Please try again.")

    elif choice == '2':
        print("Thank you for using our application")
        break

mycursor.close()
mydb.close()