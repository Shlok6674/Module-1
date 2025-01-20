# Program to access a string up to the fifth character

def get_first_five_characters(input_string):
    return input_string[:5]

# Example usage
input_string = "Hello, World!"
result = get_first_five_characters(input_string)
print("First five characters:", result)