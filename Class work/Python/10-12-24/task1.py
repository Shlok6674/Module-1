n=int(input("Enter the value :"))

for i in range(1,n+1):
    for j in range(1,i+1):
        print("*",end="")
    print()    

for i in range(1,6):
    print("*"*i)



for a in range(1,6):
    for k in range(1,6-a):
        print(" ",end="")
    for b in range(1,a+1):
        print("*",end="")
    print()      

for i in range(1,6):
    print(" "*(6-i)," *"*i)