def fun1():
    n = int(input("Enter Number :"))
    fac = 1

    for i in range(1,n+1):
        fac*=i

    return fac

print(fun1())

def add():
    n = int(input("Enter Number 1 :"))
    n1 = int(input("Enter Number 2 :"))

    return n+n1

print(add())


def fun(n):
    
    fac = 1

    for i in range(1,n+1):
        fac*=i

    return fac

n1 = int(input("Enter Number :"))

print(fun(n1))

def add(n,n1):
    

    return n+n1


a = int(input("Enter Number 1 :"))
b = int(input("Enter Number 2 :"))

print(add(a,b))