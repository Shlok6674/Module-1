# Program to access the string from the second position onwards using slicing

def slice_string(input_string):
    return input_string[1:]

# Example usage
example_string = "Hello, World!"
sliced_string = slice_string(example_string)
print(sliced_string)  # Output: "ello, World!"