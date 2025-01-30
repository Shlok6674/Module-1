class A:
    def prime(self, num):
         
         if num <= 1:
            return False
         for i in range(2, num):
            if num % i == 0:
                return False
         return True

class B(A):
     def palindrome(self, num):
        original_num = num
        reversed_num = 0
        while num > 0:
            digit = num % 10
            reversed_num = reversed_num * 10 + digit
            num = num // 10
        return original_num == reversed_num
    
obj = A()
obj1 = B()

a = int(input("Enter a number: "))
print(obj.prime(a))
b = int(input("Enter a number: "))
print(obj1.palindrome(b))
    

