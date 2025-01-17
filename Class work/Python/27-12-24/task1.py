"""
t = (1,2,1.45,6.34,"hello","why")

print(type(t))

print(t.count(1))

print(t.index(1.45))

l1 = list(t)
print(l1)
l1.append(400)
print(l1)

l3 =tuple(l1)
print(l3)
"""

d = {1:"hello",2:"hello1",3:"why",4:"python"}
print(d.get(3))
print(d.items())
print(d.keys())
print(d.values())
d.update({5:"Java",6:"PHP"})
print(d)
d.pop(2)
print(d)
d.popitem()
print(d)

d1 = {}
t ={1,2,3,4}
print(d1.fromkeys(t,2))

d = {}

for i in range(1,31):
    d[i] = i*i

print(d)

s = input("Enter name : ")
d = {}

for i in s:
    if i in d:
        d[i] += 1

    else:
        d[i] = 1

    print(d)

    