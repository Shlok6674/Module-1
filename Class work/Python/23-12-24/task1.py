""" list :
           list is a collection of similar and dissimilar data type in single variable

           list is mutable
           list is ordered
           list allows slicing
           list allows duplicate values
           list is denoted by []

"""


l = [10,20,1.45,5.656,"hello","world",6.346,1,1,True,False]   # list

l.append(100)   # adding data type at end of list
print(l)

l1 = l.copy()   # copy list to another variable
print(l1)

print(l.count(1))  # count specific data in list

l.extend([400,600,500])  # it extends list bay adding value at last
print(l)
print(l.index(20))   #it gives the index of of given data from string

l.insert(2,"shlok")  # it insert the value of data at specific index
print(l)

l.pop(4)  # it removes the  last data from list
print(l)

l.remove("hello")  # it removes specific data from the list
print(l)

print(l.reverse())  # it reverses the list
print(l)
