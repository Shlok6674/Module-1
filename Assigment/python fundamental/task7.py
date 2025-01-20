# Define the list of strings
string_list = ["apple", "banana", "cherry", "date", "elderberry"]

n = print("Enter the string to find: ")

# Define the string to find
search_string = "n"


# Iterate through the list
for string in string_list:
    if string == search_string:
        found = True
        break

# Print the result
if found:
    print(f"'{search_string}' found in the list.")
else:
    print(f"'{search_string}' not found in the list.")