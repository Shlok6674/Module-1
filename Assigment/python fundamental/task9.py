def even_numbers():
    even_nums = []
    for i in range(2, 21, 2):
        even_nums.append(i)
    return even_nums

# Example usage:
for number in even_numbers():
    print(number)