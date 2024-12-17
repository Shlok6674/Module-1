def myfun():
    n = int(input("Enter the number of Rows: "))

    for i in range(1,n+1):
        print("*"*i)


def myfun2():
    n = int(input("Enter the number of Rows: "))

    for i in range(1,n+1):
        print(" "*(6-i),"*"*i)

def myfun3(n):

    for i in range(1,n+1):
        print(" "*(6-i)," *"*i)

def myfun4(n):
    prime  = 0
    for i in range(1,n+1):

        if n%i == 0:
            
            prime = prime + 1

        if prime==2:
           print(n,"is prime")

        else:
           print(n,"in not prime")
