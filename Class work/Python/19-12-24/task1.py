s = "Upper system Programming"









s = input("Enter String :")
n = s[::-1]

if s==n:
    print("Given String is a palindrome")

else:
    print("Given String is not a palindrome")



s = input("Enter String :")

if len(s)%2==0:
    print(s)
else:
    mid = int(len(s)/2)

    print(s[mid-1]+s[mid]+s[mid+1])


