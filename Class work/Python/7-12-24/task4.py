i = 1
ev = 0 
od = 0
evsum = 0
odsum = 0
while(i<=5):
    n = int(input("Enter Number: "))

    if n%2==0:
        print("Even",n)
        ev=ev+1
        evsum = evsum +n

    else:
        print("Odd",n)
        od=od+1
        odsum = odsum +n
    
    i+=1

print("Even numbers are :",ev)    
print("Odd Nuumbers are :",od)    
print("Even Sum : ",evsum)    
print("Odd Sum :",odsum)    